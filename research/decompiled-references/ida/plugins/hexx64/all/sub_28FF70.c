__int64 __fastcall sub_28FF70(__int64 a1, __int64 a2, __int64 a3, double a4)
{
  int v4; // ebp
  __int64 i; // r12
  __int64 v7; // rax
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 result; // rax
  bool v12; // [rsp+0h] [rbp-58h]
  _QWORD v13[9]; // [rsp+10h] [rbp-48h] BYREF

  v13[1] = __readfsqword(0x28u);
  v4 = *(_DWORD *)(a1 + 24) - 1;
  if ( v4 < 0 )
    return 1;
  for ( i = 8LL * (unsigned int)v4; ; i -= 8 )
  {
    v7 = *(_QWORD *)(a1 + 16);
    v8 = a2;
    a2 = *(_QWORD *)(v7 + i);
    if ( *(_DWORD *)(a2 + 8) == 57 && *(_QWORD *)(a2 + 24) != v8 )
    {
      v9 = sub_284360(*(_QWORD *)(v7 + i), v8, nullptr, a4);
      result = *(unsigned __int8 *)(v9 + 60);
      if ( (_BYTE)result )
        break;
    }
    if ( --v4 == -1 )
      return 1;
  }
  if ( *(_BYTE *)(v9 + 64) )
  {
    sub_244C60(v13, v8, *(_QWORD *)(a1 + 72), a3);
    v12 = sub_28FD60(a1);
    clear_tinfo_t();
    return v12;
  }
  return result;
}

