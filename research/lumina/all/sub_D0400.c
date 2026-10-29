__int64 __fastcall sub_D0400(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rcx
  __int64 result; // rax
  __int64 v9; // rbp
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rdi
  unsigned int v13; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v14; // [rsp+8h] [rbp-20h]

  v14 = __readfsqword(0x28u);
  if ( (_DWORD)a2 == 99 )
  {
    v9 = *(_QWORD *)a1;
    v10 = *(_QWORD *)(*(_QWORD *)a1 + 24LL);
    if ( v10 )
      xmmword_241500(v10);
    v13 = 0;
    *(_QWORD *)(v9 + 760) = &v13;
    sub_D0280(a1, a2, a3, a4, a5, a6);
    v12 = *(_QWORD *)(v9 + 24);
    *(_QWORD *)(v9 + 760) = 0;
    if ( v12 )
      xmmword_241510(v12, a2, v11);
    return v13;
  }
  else
  {
    v7 = a1 + 4LL * (int)a2;
    result = *(unsigned int *)(v7 + 208);
    if ( (_DWORD)a3 )
      *(_DWORD *)(v7 + 208) = 0;
  }
  return result;
}
