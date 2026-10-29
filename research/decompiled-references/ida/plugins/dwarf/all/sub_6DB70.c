__int64 __fastcall sub_6DB70(__int64 a1)
{
  unsigned int v1; // ebp
  const char *v4; // rsi
  __int64 v5; // rax
  unsigned __int64 v6; // rbp
  __int64 v7; // r12
  const void *v8; // r14
  _QWORD *v9; // r12
  __int64 v10; // r14
  char *v11; // rdi
  char *v12; // rsi
  char *v13; // [rsp+8h] [rbp-14B0h]
  char *s1; // [rsp+10h] [rbp-14A8h] BYREF
  __int128 v15; // [rsp+18h] [rbp-14A0h]
  char *v16; // [rsp+30h] [rbp-1488h] BYREF
  __int128 v17; // [rsp+38h] [rbp-1480h]
  _QWORD v18[654]; // [rsp+48h] [rbp-1470h] BYREF

  v1 = 1;
  v18[646] = __readfsqword(0x28u);
  if ( *(_QWORD *)(a1 + 72) )
    return v1;
  if ( (debug & 0x40000) != 0 )
    sub_16DD0((__int64)"DWARF: open()'ing module. path=%s, base=%a, size=%zu\n");
  if ( (*(_BYTE *)(dbg + 32LL) & 1) == 0 || *(_BYTE *)(a1 + 184) )
  {
    v5 = *(_QWORD *)(a1 + 64);
    v6 = *(_QWORD *)(a1 + 8);
    v17 = 0;
    v7 = *(_QWORD *)(v5 + 64);
    v18[0] = 0xFFFFFFFFLL;
    memset(&v18[1], 0, 5156);
    v16 = nullptr;
    if ( v6 > 1 )
    {
      v8 = *(const void **)a1;
      v16 = (char *)qvector_reserve(&v16, 0, v6, 1);
      *(_QWORD *)&v17 = v6;
      memmove(v16, v8, v6 - 1);
      v16[v6 - 1] = 0;
    }
    LODWORD(v18[0]) = sub_1B1A0(*(_QWORD *)a1);
    sub_1B0D0((__int64)v18 + 4, *(_QWORD *)(v7 + 8), v18[0]);
    v1 = sub_26600((__m128i *)&v16);
    if ( (_BYTE)v1 )
    {
      s1 = nullptr;
      v15 = 0;
      v9 = (_QWORD *)(v7 + 120);
      v10 = sub_25460((__int64)&v16);
      if ( !(unsigned __int8)sub_22A10(v9, (__int64)&s1, (__int64)&v16) )
        goto LABEL_35;
      v13 = s1;
      v11 = s1;
      if ( !strcmp(s1, "|ignore-module|") )
      {
        if ( v13 )
        {
          *(_QWORD *)&v15 = 0;
          qfree(v11);
        }
        if ( v16 )
        {
          *(_QWORD *)&v17 = 0;
          qfree(v16);
        }
        return 0;
      }
      if ( !(_QWORD)v15 )
        v11 = (char *)src;
      if ( !(unsigned __int8)sub_6D520(a1, v11, 0, v10) )
      {
LABEL_35:
        if ( !(unsigned __int8)sub_22AE0(v9, (__int64 *)&s1, (__int64)&v16, 0) )
          goto LABEL_27;
        v12 = (char *)src;
        if ( (_QWORD)v15 )
          v12 = s1;
        if ( (unsigned __int8)sub_6D520(a1, v12, 0, v10) )
        {
          sub_1D740((__int64)"Found DWARF file \"%s\" corresponding to \"%s\"\n", s1, v16);
          sub_22960(v9, (__int64)&v16, (__int64)s1);
        }
        else
        {
LABEL_27:
          v1 = 0;
        }
      }
      if ( s1 )
      {
        *(_QWORD *)&v15 = 0;
        qfree(s1);
      }
    }
    if ( v16 )
    {
      *(_QWORD *)&v17 = 0;
      qfree(v16);
    }
    return v1;
  }
  v4 = src;
  if ( *(_QWORD *)(a1 + 8) )
    v4 = *(const char **)a1;
  return sub_6D520(a1, v4, 1, -1);
}

