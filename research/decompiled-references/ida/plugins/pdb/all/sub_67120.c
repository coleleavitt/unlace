_QWORD *__fastcall sub_67120(_QWORD *a1, __int64 a2, unsigned int a3, _WORD *a4)
{
  _DWORD *v6; // rax
  __int64 v7; // r11
  _DWORD *v8; // rbp
  __int64 v10; // rdi
  _QWORD v11[7]; // [rsp+0h] [rbp-38h] BYREF

  v11[1] = __readfsqword(0x28u);
  v6 = sub_5F700((_QWORD *)(a2 + 168), a3);
  if ( v6
    && (v8 = v6,
        (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(**(_QWORD **)(v7 + 608) + 24LL))(
          v11,
          *(_QWORD *)(v7 + 608),
          2),
        v11[0]) )
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v11[0] + 40LL))(v11[0], (unsigned int)v8[3]) )
    {
      if ( a4 )
        *a4 = *((_WORD *)v8 + 10);
      *a1 = v11[0];
    }
    else
    {
      v10 = v11[0];
      *a1 = 0;
      if ( v10 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
    }
  }
  else
  {
    *a1 = 0;
  }
  return a1;
}

