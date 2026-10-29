// Alternative name is '_ZN7ida_mcp5tools18cpp_class_recovery12_GLOBAL__N_112TypeInfoNodeD1Ev'
void __fastcall ida_mcp::tools::cpp_class_recovery::`anonymous namespace'::TypeInfoNode::~TypeInfoNode(
        ida_mcp::tools::cpp_class_recovery::_anonymous_namespace_::TypeInfoNode *this)
{
  void *v2; // rdi

  v2 = *((void **)this + 8);
  if ( v2 )
    operator delete(v2, *((_QWORD *)this + 10) - (_QWORD)v2);
  if ( *((_QWORD *)this + 5) )
  {
    *((_QWORD *)this + 6) = 0;
    qfree();
  }
  if ( *((_QWORD *)this + 2) )
  {
    *((_QWORD *)this + 3) = 0;
    qfree();
  }
}

