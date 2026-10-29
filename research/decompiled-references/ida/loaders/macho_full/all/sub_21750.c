__int64 __fastcall sub_21750(__int64 a1, __int64 a2)
{
  __int64 _32bit; // r12
  unsigned int v3; // r13d
  __int64 v4; // r12
  int v5; // ebp
  unsigned int v6; // eax
  __int64 v8; // r13
  __int64 v9; // rbp
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // r13
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rax

  sub_216A0(a1, a2, "prebound_dylib_command");
  _32bit = (unsigned int)get_32bit();
  v3 = _32bit;
  v4 = a2 + _32bit;
  v5 = get_32bit();
  v6 = get_32bit();
  if ( v6 < v3 )
  {
    v8 = v3 - v6;
    v9 = (unsigned int)(v5 + 7) >> 3;
    v10 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) & (v6 + a2);
    if ( (unsigned int)v9 > (unsigned int)v8 )
      v9 = v8;
    v11 = getinf();
    v12 = v9 + v10;
    if ( v11 < v10 || v12 < v11 )
      create_data();
    set_cmt();
    v13 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) & (v4 - v12);
    v14 = getinf();
    if ( v14 < v12 || v13 + v12 < v14 )
      create_data();
  }
  return *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) & v4;
}

