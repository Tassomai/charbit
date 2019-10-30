/* NOTE: Since Python may define some pre-processor definitions which affect the
         standard headers on some systems, you must include Python.h before any
         standard headers are included */
#include <Python.h>
#include <limits.h>

static struct PyModuleDef charbit = {
    PyModuleDef_HEAD_INIT,
    .m_name = "charbit",
    .m_doc = NULL,
    .m_size = 1,  /* module can be reinitialised */
    .m_methods = NULL,
};


PyMODINIT_FUNC
PyInit_charbit(void)
{
    PyObject *module;

    if (!(module = PyModule_Create(&charbit)))
        return NULL;

    if (PyModule_AddIntConstant(module, "CHAR_BIT", CHAR_BIT))
        return NULL;

    return module;
}
