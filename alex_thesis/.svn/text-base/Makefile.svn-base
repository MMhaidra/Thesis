# variables defined here:
TEXFILE = thesis
ONLINE= /Users/paulschaack/Documents/University/PhD/LHCb/my_computing/html/public_html
COMMENT= new version of the thesis



# functions:
all:	bibtex online commit clean count open

commit:
	svn commit -m "$(COMMENT)"
svn:
	svn commit -m "$(COMMENT)"

open:
	open $(TEXFILE).pdf

pdf: 	
	-pdflatex $(TEXFILE)
	-bibtex $(TEXFILE)
	-pdflatex $(TEXFILE)
	-pdflatex $(TEXFILE)		
	#-open $(TEXFILE).pdf

bibtex:
	-pdflatex $(TEXFILE)
	-bibtex $(TEXFILE)
	-pdflatex $(TEXFILE)
	-pdflatex $(TEXFILE)
	-pdflatex $(TEXFILE)

count_silent:
	texcount -html chapter*/*.tex *matter/*.tex > texcount/count.html

count:
	texcount -html chapter*/*.tex *matter/*.tex > texcount/count.html
	open texcount/count.html

online: count_silent
	[ -d thesis ] && rm -r thesis || echo "Directory does not exists"
	mkdir thesis
	cp $(TEXFILE).pdf thesis/.
	cp texcount/count.html thesis/.
	rsync -a --delete-after thesis pns04@lx06.hep.ph.ic.ac.uk:public_html/
	rm -r thesis
	##alternatively use two scp commands instead of all of the above (but requires 2x password):
	#scp $(TEXFILE).pdf pns04@lx06.hep.ph.ic.ac.uk:public_html/thesis/
	#scp texcount/count.html pns04@lx06.hep.ph.ic.ac.uk:public_html/thesis/

##online_mac is hardwired to my $ONLINE folder, probably not such a good idea...
online_mac:	count_silent
	cp $(TEXFILE).pdf $(ONLINE)/thesis/.
	cp texcount/count.html $(ONLINE)/thesis/.
	rsync -a --delete-after $(ONLINE)/thesis pns04@lx06.hep.ph.ic.ac.uk:public_html/

clean:
	-rm *.log *.toc *.aux *.blg *.out *.lof *.lot *.cut *.cfg *.drv *.dtx *.idx *.ins *.dvi *.gz

clear: clean