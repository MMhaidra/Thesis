# variables defined here:
TEXFILE = thesis
ONLINE= /home/hep/as1905/public_html/.
COMMENT= new version of the thesis



# functions:
all:	bibtex 

update: 	 commit clean count online

commit:
	svn commit -m "$(COMMENT)"
svn:
	svn commit -m "$(COMMENT)"


pdf: 	
	-pdflatex $(TEXFILE)
	-bibtex $(TEXFILE)
	-pdflatex $(TEXFILE)
	-pdflatex $(TEXFILE)		

bibtex:
	-pdflatex $(TEXFILE)
	-bibtex $(TEXFILE)
	-pdflatex $(TEXFILE)
	-pdflatex $(TEXFILE)
	-pdflatex $(TEXFILE)


count:
	perl texcount/texcount.pl  -html chapter*/*.tex *matter/*.tex > texcount/count.html

freq:
	perl texcount/texcount.pl  -freq chapter*/*.tex *matter/*.tex 

online: count
	cp $(TEXFILE).pdf ~/public_html/thesis/
	cp texcount/count.html ~/public_html/thesis/
	cp texcount/freq.html ~/public_html/thesis/


clean:
	-rm *.log *.toc *.aux *.blg *.out *.lof *.lot *.cut *.cfg *.drv *.dtx *.idx *.ins *.dvi *.gz *.bbl

clear: clean
