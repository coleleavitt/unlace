void __fastcall std::_Optional_payload_base<std::vector<ida_mcp::mcp::Role>>::_M_reset(__int64 a1)
{
  void *v2; // rdi

  *(_BYTE *)(a1 + 24) = 0;
  v2 = *(void **)a1;
  if ( v2 )
    operator delete(v2, *(_QWORD *)(a1 + 16) - (_QWORD)v2);
}

