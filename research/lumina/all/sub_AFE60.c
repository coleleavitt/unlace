unsigned __int64 __fastcall sub_AFE60(__int64 a1, __int64 *a2)
{
  __int64 v3; // r14
  size_t v4; // rax
  __int64 v5; // rbp
  __int64 v6; // rbx
  __int64 v7; // rdi
  _BYTE v9[5]; // [rsp+3h] [rbp-45h] BYREF
  unsigned __int64 v10[8]; // [rsp+8h] [rbp-40h] BYREF

  v3 = *(_QWORD *)(a1 + 24);
  v10[0] = __readfsqword(0x28u);
  v4 = sub_196CD0(v9, v10) - (_QWORD)v9;
  if ( v4 )
    sub_9E3C0(a2, v9, v4);
  if ( v3 )
  {
    v5 = 0;
    v6 = 0;
    do
    {
      ++v6;
      v7 = v5 + *(_QWORD *)(a1 + 16);
      v5 += 104;
      sub_AFCD0(v7, a2);
    }
    while ( v3 != v6 );
  }
  return v10[0] - __readfsqword(0x28u);
}
