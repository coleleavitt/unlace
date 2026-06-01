__int64 __fastcall sub_839C0(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // eax
  __int64 v5; // rdi
  unsigned int v6; // ebx
  __int64 v8; // rdx
  __int64 *v9; // rax
  __int64 *v10; // [rsp+0h] [rbp-48h] BYREF
  __int128 v11; // [rsp+8h] [rbp-40h]
  char v12; // [rsp+18h] [rbp-30h]
  unsigned __int64 v13; // [rsp+28h] [rbp-20h]

  v13 = __readfsqword(0x28u);
  v10 = 0;
  v12 = 0;
  v11 = 0;
  v4 = sub_83660(a1, (__int64)&v10, a3, a4);
  v5 = (__int64)v10;
  v6 = v4;
  if ( (_BYTE)v4 )
  {
    if ( (unsigned __int8)(v12 - 10) <= 1u )
    {
      v8 = *v10;
      if ( (_QWORD)v11 == 1 || (v9 = v10 + 3, 24LL * (_QWORD)v11 == 24) )
      {
LABEL_12:
        *a2 = v8;
        goto LABEL_2;
      }
      while ( v8 == *v9 )
      {
        v9 += 3;
        if ( &v10[3 * (_QWORD)v11] == v9 )
          goto LABEL_12;
      }
    }
    v6 = 0;
  }
LABEL_2:
  if ( v5 )
  {
    *(_QWORD *)&v11 = 0;
    qfree(v5);
  }
  return v6;
}
