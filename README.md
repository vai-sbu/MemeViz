# MemeViz

MemeViz is a design tool that allows users to create eye-catching visualizations that embed basic charts into an image. 

More information can be found in our paper [Data Memes for Personal Visualization](https://www3.cs.stonybrook.edu/~mueller/papers/DataMemesForPersonalVisualization.pdf) presnted at the Workshop on Personal Visualization: Exploring Data in Everyday Life (held jointly with VIS 2015).

Please cite our work if you use this tool in your research.

## Dependencies

The MemeViz code is written in C++ and this repository contains a Visual Studio 2017 solution with the code. 

The code requires two libraries to run 

* [OpenCV Version 3.1](https://opencv.org/opencv-3-1/)

* [Qt Version 5.12.4](https://www.qt.io/download)

Additionally, the tool makes use of the Google Custom Search API to retrieve images. To use this feature you will need an API key. You can do this through your [Google Developer account](https://console.developers.google.com/apis/dashboard)


## Data Files Supported

MemeViz accepts data in the form of .csv files. 

The data must contain at least two columns. The first column must contain the label for each data item. 
