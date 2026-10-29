__int64 __fastcall sub_2B170(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 *v6; // rax
  unsigned int v7; // ebx
  __int64 *v9; // [rsp+0h] [rbp-48h] BYREF
  __int128 v10; // [rsp+8h] [rbp-40h]
  char v11; // [rsp+18h] [rbp-30h]
  unsigned __int64 v12; // [rsp+28h] [rbp-20h]

  v12 = __readfsqword(0x28u);
  v9 = 0;
  v11 = 0;
  v10 = 0;
  if ( (*(_BYTE *)(a2 + 34) & 4) != 0 || (getinf(3) & 0x1006) == 0x1002 )
    v3 = 159;
  else
    v3 = 14;
  sub_81F70(a1, &v9, *(_QWORD *)(a2 + 16), v3, 0, 0);
  v4 = (__int64)v9;
  if ( (unsigned __int8)(v11 - 10) > 1u )
  {
LABEL_9:
    v7 = 0;
    goto LABEL_10;
  }
  v5 = *v9;
  if ( (_QWORD)v10 != 1 )
  {
    v6 = v9 + 3;
    if ( 24LL * (_QWORD)v10 != 24 )
    {
      while ( v5 == *v6 )
      {
        v6 += 3;
        if ( &v9[3 * (_QWORD)v10] == v6 )
          goto LABEL_13;
      }
      goto LABEL_9;
    }
  }
LABEL_13:
  v7 = 0;
  if ( (v5 & 0xFFFFFFFFFFFFFFFELL) == *(_QWORD *)(a2 + 16) + *(unsigned __int16 *)(a2 + 26) )
  {
    sub_2A700(a1, (__int64)&v9);
    v4 = (__int64)v9;
    v7 = 1;
  }
LABEL_10:
  if ( v4 )
  {
    *(_QWORD *)&v10 = 0;
    qfree(v4);
  }
  return v7;
}
