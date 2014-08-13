debugPrintObj = function(obj) {
    msg = paste("=debug R========\n", paste(capture.output(print(obj)), collapse="\n"))
    message(msg)
}

debugPrintString = function(str) {
    msg = paste("=debug R==", str)
    message(msg)
}