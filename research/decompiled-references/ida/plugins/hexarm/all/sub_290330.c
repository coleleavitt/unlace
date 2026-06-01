__int64 __fastcall sub_290330(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebp
  __int64 i; // r12
  __int64 v6; // rax
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 result; // rax
  bool v11; // [rsp+0h] [rbp-58h]
  _QWORD v12[9]; // [rsp+10h] [rbp-48h] BYREF

  v12[1] = __readfsqword(0x28u);
  v3 = *(_DWORD *)(a1 + 24) - 1;
  if ( v3 < 0 )
    return 1;
  for ( i = 8LL * (unsigned int)v3; ; i -= 8 )
  {
    v6 = *(_QWORD *)(a1 + 16);
    v7 = a2;
    a2 = *(_QWORD *)(v6 + i);
    if ( *(_DWORD *)(a2 + 8) == 57 && *(_QWORD *)(a2 + 24) != v7 )
    {
      v8 = sub_284720(*(_QWORD *)(v6 + i), v7, nullptr);
      result = *(unsigned __int8 *)(v8 + 60);
      if ( (_BYTE)result )
        break;
    }
    if ( --v3 == -1 )
      return 1;
  }
  if ( *(_BYTE *)(v8 + 64) )
  {
    sub_245020(v12, v7, *(_QWORD *)(a1 + 72), a3);
    v11 = sub_290120(a1);
    clear_tinfo_t();
    return v11;
  }
  return result;
}

