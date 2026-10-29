unsigned __int64 __fastcall sub_421C0(__int64 a1)
{
  char v1; // dl
  unsigned __int64 v2; // rax
  __m128i v3; // xmm1
  __int64 v4; // rax
  __m128 v5; // xmm0
  int v6; // eax
  int v7; // eax
  const char *v9; // rdx
  _DWORD *v10; // rsi
  __int64 v11; // [rsp+0h] [rbp-1068h] BYREF
  __m128i v12; // [rsp+8h] [rbp-1060h] BYREF
  __int64 v13; // [rsp+20h] [rbp-1048h] BYREF
  __int128 v14; // [rsp+28h] [rbp-1040h]
  char v15[4104]; // [rsp+40h] [rbp-1028h] BYREF
  unsigned __int64 v16; // [rsp+1048h] [rbp-20h]

  v16 = __readfsqword(0x28u);
  *(_QWORD *)(a1 + 128) = 0;
  read_config2("pdb", 1, &off_AA3A0, 8, 0, 0, 0, a1);
  v11 = 0;
  v12 = 0;
  v1 = qgetenv("_NT_SYMBOL_PATH", &v11);
  v2 = *(_QWORD *)(a1 + 128);
  if ( v1 )
  {
    v3 = _mm_loadu_si128(&v12);
    v4 = v11;
    v5 = _mm_loadh_ps((const double *)(a1 + 136));
    v11 = *(_QWORD *)(a1 + 120);
    *(_QWORD *)(a1 + 120) = v4;
    v2 = v12.m128i_i64[0];
    *(__m128i *)(a1 + 128) = v3;
    v12 = (__m128i)v5;
  }
  if ( v2 > 1 )
  {
    if ( (debug & 0x400000) == 0 )
      goto LABEL_5;
    goto LABEL_12;
  }
  v13 = 0;
  v14 = 0;
  if ( !(unsigned __int8)qgetenv("TMPDIR", &v13) && !(unsigned __int8)qgetenv("TMP", &v13) )
  {
    v10 = (_DWORD *)v13;
    if ( *((_QWORD *)&v14 + 1) <= 4u )
    {
      v13 = qvector_reserve(&v13, v13, 5, 1);
      v10 = (_DWORD *)v13;
    }
    *(_QWORD *)&v14 = 5;
    *v10 = 1886221359;
    *(_BYTE *)(v13 + 4) = 0;
  }
  v9 = src;
  if ( (_QWORD)v14 )
    v9 = (const char *)v13;
  qmakepath(v15, 4096, v9, "ida", 0);
  if ( !(unsigned __int8)qisdir(v15) && (unsigned int)qmkdir(v15, 511) )
    v15[0] = 0;
  sub_37FD0((__int64 *)(a1 + 120), (__int64)"%s%s%s", "srv*", v15, "*http://msdl.microsoft.com/download/symbols");
  if ( v13 )
  {
    *(_QWORD *)&v14 = 0;
    qfree(v13);
  }
  if ( (debug & 0x400000) != 0 )
LABEL_12:
    sub_29350();
LABEL_5:
  v6 = *(_DWORD *)(a1 + 460);
  if ( v6 )
    *(_DWORD *)(a1 + 448) = v6;
  v7 = *(_DWORD *)(a1 + 464);
  if ( v7 != -1 )
    *(_BYTE *)(a1 + 452) = v7 == 1;
  if ( v11 )
  {
    v12.m128i_i64[0] = 0;
    qfree(v11);
  }
  return v16 - __readfsqword(0x28u);
}

