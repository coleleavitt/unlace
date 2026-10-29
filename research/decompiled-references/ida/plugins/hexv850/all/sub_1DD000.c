__int64 __fastcall sub_1DD000(__int64 *a1, unsigned __int64 *a2, unsigned __int64 a3, int a4)
{
  unsigned int v4; // ebp
  unsigned __int64 v8; // r15
  int v9; // r14d
  __int64 v10; // rax
  __int64 v11; // rdi
  const char *v12; // r8
  int v13; // ecx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // [rsp+18h] [rbp-60h] BYREF
  __int64 v16; // [rsp+20h] [rbp-58h] BYREF
  __int128 v17; // [rsp+28h] [rbp-50h]
  unsigned __int64 v18; // [rsp+38h] [rbp-40h]

  v18 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(*(_QWORD *)(*a1 + 1496) + 728LL) & 2) == 0
    || *((_BYTE *)a1 + 24)
    || !(unsigned __int8)sub_1DCF10(a1, &v15, a3) )
  {
    return 0;
  }
  v8 = *a2;
  v9 = v15;
  if ( (*a2 & (*a2 + 1)) != 0 || v8 < v15 )
  {
    v13 = log2floor() + 1;
    if ( (unsigned __int64)v13 <= 0x3F )
    {
      v14 = v8 & ~(-1LL << v13);
      if ( v14 < v8 )
      {
        *a2 = v14;
        v4 = 1;
        goto LABEL_9;
      }
    }
    return 0;
  }
  v4 = 4;
LABEL_9:
  v16 = 0;
  v17 = 0;
  sub_1AD960(a3, (char *)&v16, 4u);
  v10 = v17;
  if ( (unsigned __int64)v17 > 1 )
  {
    tag_remove();
    v10 = v17;
  }
  v11 = *a1;
  v12 = s1;
  if ( v10 )
    LODWORD(v12) = v16;
  sub_32B650(v11, a4, (v4 == 4) + 52, v8, (_DWORD)v12, v9);
  if ( v16 )
  {
    *(_QWORD *)&v17 = 0;
    qfree();
  }
  return v4;
}

