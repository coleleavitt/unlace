void __fastcall sub_3B760(int a1, _QWORD *a2)
{
  const char *v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdi
  __int64 v9; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v10; // [rsp+8h] [rbp-30h]
  unsigned __int64 v11; // [rsp+18h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  if ( a1 )
  {
    if ( a1 != 1 )
      return;
    v3 = (const char *)a2[2];
    sub_3B5B0((__int64)&v9, (__int64)v3);
    if ( v10 > 1 )
    {
      if ( !sub_1BDA0(*(_QWORD **)(a2[2] + 48LL), (__int64)&v9, v4, v5, v6, v7) )
        sub_1DD00(*(_QWORD *)(a2[2] + 48LL), (__int64)&v9, 1);
      v3 = (_BYTE *)(&dword_0 + 1);
      (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)a2[2] + 432LL))(a2[2], 1);
      sub_1FAE0();
      v8 = v9;
      if ( v9 )
        goto LABEL_6;
    }
    else
    {
      v8 = v9;
      if ( v9 )
      {
LABEL_6:
        v10 = 0;
        qfree(v8, v3);
      }
    }
  }
  else if ( a2 )
  {
    operator delete(a2, 0x18u);
  }
}

