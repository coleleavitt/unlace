__int64 __fastcall sub_148950(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, __int16 a5, __int64 a6)
{
  _QWORD *v7; // rdi
  int v8; // eax
  _QWORD *v9; // rax
  __int64 v11; // [rsp+8h] [rbp-30h] BYREF
  _QWORD v12[5]; // [rsp+10h] [rbp-28h] BYREF

  v7 = *(_QWORD **)(a1 + 96);
  v12[1] = __readfsqword(0x28u);
  v11 = 0;
  if ( (a5 & 0x100) != 0 )
  {
    v8 = sub_139190(v7, (__int64)&v11, a2);
    if ( v8 && a3 )
    {
      *(_DWORD *)a3 = v8;
      v9 = (_QWORD *)*a2;
      if ( !*a2 )
        v9 = (_QWORD *)a2[1];
      *(_QWORD *)(a3 + 8) = *v9;
    }
  }
  else
  {
    sub_147AB0(v12, (__int64)v7, a2, (_DWORD *)a3, &v11, a4, a5, a6);
    if ( v12[0] )
    {
      if ( !under_debugger )
        sub_37DDE0(51731);
      BUG();
    }
  }
  return v11;
}

