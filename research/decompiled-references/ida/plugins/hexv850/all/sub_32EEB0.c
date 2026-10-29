__int64 __fastcall sub_32EEB0(__int64 *a1, __int64 a2, int a3)
{
  __int64 v3; // r12
  __int64 v4; // r13
  __int64 v5; // rax
  unsigned int v6; // ebx
  __int64 v7; // rbx
  __int64 v8; // rbp
  __int64 v10; // [rsp+0h] [rbp-8h] BYREF
  __int128 vars0; // [rsp+8h] [rbp+0h]
  unsigned __int64 vars10; // [rsp+18h] [rbp+10h]

  vars10 = __readfsqword(0x28u);
  v10 = 0;
  vars0 = 0;
  sub_32EC50(&v10, (__int64)a1, a2, 0, a3);
  v3 = vars0;
  v4 = v10;
  if ( !(_QWORD)vars0 )
  {
    v6 = 0;
    if ( !v10 )
      return v6;
    goto LABEL_10;
  }
  v5 = *a1;
  *a1 = *(_QWORD *)(v10 + 56);
  v6 = 1;
  *(_QWORD *)(v4 + 56) = v5;
  if ( v4 )
  {
    v7 = v4 + 56;
    v8 = 0;
    do
    {
      clear_tinfo_t();
      if ( *(_QWORD *)(v7 - 24) )
      {
        *(_QWORD *)(v7 - 16) = 0;
        qfree();
      }
      if ( *(_QWORD *)(v7 - 48) )
      {
        *(_QWORD *)(v7 - 40) = 0;
        qfree();
      }
      ++v8;
      v7 += 64;
    }
    while ( v8 != v3 );
    v6 = 1;
LABEL_10:
    qfree();
  }
  return v6;
}

