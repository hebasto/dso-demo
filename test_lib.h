#ifndef TEST_LIB_H
#define TEST_LIB_H

extern "C" {

__attribute__ ((visibility ("default")))
void Greet();

__attribute__ ((visibility ("default")))
int ProcessStdString();

}

#endif // TEST_LIB_H
