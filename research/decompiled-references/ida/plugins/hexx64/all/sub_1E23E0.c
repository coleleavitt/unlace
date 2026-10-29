__int64 __fastcall sub_1E23E0(__int64 *a1, unsigned __int64 *a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned int v4; // ebp
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // r14
  __int64 v10; // rax
  const char *v11; // r8
  int v12; // ecx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // [rsp+18h] [rbp-60h] BYREF
  const char *v15; // [rsp+20h] [rbp-58h] BYREF
  __int128 v16; // [rsp+28h] [rbp-50h]
  unsigned __int64 v17; // [rsp+38h] [rbp-40h]

  v17 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(*(_QWORD *)(*a1 + 1496) + 728LL) & 2) == 0
    || *((_BYTE *)a1 + 24)
    || !(unsigned __int8)sub_1E22F0(a1, (__int64 *)&v14, a3) )
  {
    return 0;
  }
  v8 = *a2;
  v9 = v14;
  if ( (*a2 & (*a2 + 1)) != 0 || v8 < v14 )
  {
    v12 = log2floor() + 1;
    if ( (unsigned __int64)v12 <= 0x3F )
    {
      v13 = v8 & ~(-1LL << v12);
      if ( v13 < v8 )
      {
        *a2 = v13;
        v4 = 1;
        goto LABEL_9;
      }
    }
    return 0;
  }
  v4 = 4;
LABEL_9:
  v15 = nullptr;
  v16 = 0;
  sub_1B2660(a3, (char *)&v15, 4u);
  v10 = v16;
  if ( (unsigned __int64)v16 > 1 )
  {
    tag_remove();
    v10 = v16;
  }
  v11 = s1;
  if ( v10 )
    v11 = v15;
  sub_3311F0((_QWORD *)*a1, a4, (v4 == 4) + 52, v8, v11, v9);
  if ( v15 )
  {
    *(_QWORD *)&v16 = 0;
    qfree((__int64)v15);
  }
  return v4;
}

