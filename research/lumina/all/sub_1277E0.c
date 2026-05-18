unsigned __int64 __fastcall sub_1277E0(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7)
{
  __int64 v10; // rdi
  __int64 v11; // rdx
  _DWORD *v12; // rax
  char v13; // dl
  __int64 v14; // rcx
  int v15; // edx
  __int64 v16; // rsi
  __int16 v17; // ax
  __int64 v18; // rbp
  int v19; // ecx
  const char **v20; // r12
  __int16 v21; // ax
  __int16 v22; // dx
  __int64 v23; // rbx
  __int16 v24; // ax
  int v25; // eax
  _DWORD *v26; // rsi
  __int64 v27; // rsi
  unsigned __int64 result; // rax
  _BYTE *v29; // rdi
  _BYTE *v30; // rdx
  int v31; // esi
  int v32; // ecx
  __int16 v33; // ax
  int v34; // [rsp+Ch] [rbp-7Ch]
  _BYTE v35[8]; // [rsp+10h] [rbp-78h] BYREF
  __int64 (__fastcall *v36)(__int64, __int64); // [rsp+18h] [rbp-70h]
  __int64 v37; // [rsp+20h] [rbp-68h]
  __int64 v38; // [rsp+28h] [rbp-60h]
  __int16 v39; // [rsp+34h] [rbp-54h]
  __int64 v40; // [rsp+38h] [rbp-50h]
  unsigned __int64 v41; // [rsp+48h] [rbp-40h]

  v10 = *(_QWORD *)(a1 + 16);
  v41 = __readfsqword(0x28u);
  sub_E3840(v10, a3, a2, a4, a5, a6);
  if ( (*(_BYTE *)(a3 + 48) & 0x40) != 0 )
  {
    v11 = *(_QWORD *)(a1 + 16);
    v12 = byte_241F50;
    if ( *(_BYTE *)(*(_QWORD *)v11 + 103LL) )
    {
      v13 = byte_241F50[0];
      if ( byte_241F50[0] != 96 )
        goto LABEL_4;
    }
    else
    {
      v12 = (_DWORD *)(*(_QWORD *)(v11 + 136) + 24LL * (*(_DWORD *)(v11 + 144) - 1));
      v13 = *(_BYTE *)v12;
      if ( *(_BYTE *)v12 != 96 )
      {
LABEL_4:
        if ( v13 == 95 )
          v12[3] = 1;
        goto LABEL_6;
      }
    }
    v29 = *((_BYTE **)v12 + 2);
    if ( *v29 )
    {
      v30 = *((_BYTE **)v12 + 2);
      v31 = 0;
      v32 = 0;
      do
      {
        v33 = *(_WORD *)(*(_QWORD *)(a3 + 8) + 16LL * v32 + 14);
        if ( (v33 & 0x20) == 0 )
        {
          if ( (v33 & 0x40) != 0 )
            *v30 = 64;
          ++v31;
        }
        ++v32;
        v30 = &v29[v31];
      }
      while ( *v30 );
    }
  }
LABEL_6:
  if ( *(__int16 *)(a3 + 54) > 0 )
  {
    v14 = 0;
    v15 = 0;
    do
    {
      v16 = v14 + *(_QWORD *)(a3 + 8);
      v17 = *(_WORD *)(v16 + 14);
      if ( (v17 & 0x60) != 0 )
      {
        LOBYTE(v17) = v17 | 0x80;
        *(_WORD *)(v16 + 14) = v17;
      }
      ++v15;
      v14 += 16;
    }
    while ( *(__int16 *)(a3 + 54) > v15 );
  }
  v40 = a3;
  v37 = 0;
  v38 = 0;
  v36 = sub_CF990;
  *(_DWORD *)(a1 + 64) = -a2;
  do
  {
    if ( *(__int16 *)(a3 + 54) <= 0 )
      goto LABEL_31;
    v18 = 0;
    v19 = 0;
    v20 = nullptr;
    do
    {
      while ( 1 )
      {
        v22 = v18;
        v23 = *(_QWORD *)(a3 + 8) + 16 * v18;
        v24 = *(_WORD *)(v23 + 14);
        if ( (v24 & 0x80u) != 0 )
          break;
LABEL_17:
        if ( *(__int16 *)(a3 + 54) <= (int)++v18 )
          goto LABEL_27;
      }
      HIBYTE(v24) |= 1u;
      *(_WORD *)(v23 + 14) = v24;
      v39 = 0;
      v25 = *(unsigned __int16 *)(v23 + 12);
      if ( (_WORD)v25 )
      {
        if ( !*(_BYTE *)(a3 + 63) )
        {
          v26 = *(_DWORD **)(a3 + 80);
          if ( v26 )
          {
            if ( *v26 >= v25 )
            {
              v27 = *(_QWORD *)&v26[6 * v25 - 4];
              if ( v27 )
              {
                v34 = v19;
                sub_CDCD0((__int64)v35, v27);
                v19 = v34;
                v22 = v18;
              }
            }
          }
        }
      }
      *(_WORD *)(v23 + 14) &= ~0x100u;
      if ( (v39 & 0x80u) == 0 )
      {
        v21 = v18;
        if ( (*(_BYTE *)(a3 + 48) & 0x20) != 0 )
          v21 = sub_CF5E0(a3, v22);
        sub_127410(a1, a3, v23, a2 + v21, a7);
        *(_WORD *)(v23 + 14) &= ~0x80u;
        v19 = 1;
        goto LABEL_17;
      }
      ++v18;
      v20 = (const char **)v23;
    }
    while ( *(__int16 *)(a3 + 54) > (int)v18 );
LABEL_27:
    ;
  }
  while ( v20 && v19 );
  if ( v20 )
    sub_DBD10(a1, "generated column loop on \"%s\"", *v20);
LABEL_31:
  result = __readfsqword(0x28u) ^ v41;
  *(_DWORD *)(a1 + 64) = 0;
  return result;
}
