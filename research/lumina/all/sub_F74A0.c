unsigned __int64 __fastcall sub_F74A0(__int64 *a1, int a2, __int64 *a3, int a4, int a5, int a6, double a7)
{
  __int64 v9; // r13
  unsigned __int8 *v10; // r12
  __int64 v11; // rdx
  int v12; // ecx
  int v13; // r8d
  __int64 v14; // r9
  unsigned int v15; // r14d
  unsigned __int8 *v16; // r13
  __int64 v17; // rdx
  int v18; // ecx
  int v19; // r8d
  int v20; // r9d
  char *v21; // rax
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdi
  _BOOL8 v28; // rsi
  __int64 v30; // rdi
  unsigned __int8 *v31; // rax
  __int64 v32; // r9
  unsigned __int8 v33; // cl
  int v34; // esi
  unsigned __int8 *v35; // rdx
  unsigned __int8 v36; // al
  bool v37; // cc
  __int64 v38; // rdi
  int v39; // eax
  int v40; // [rsp+Ch] [rbp-3Ch] BYREF
  unsigned __int8 *v41; // [rsp+10h] [rbp-38h] BYREF
  unsigned __int64 v42; // [rsp+18h] [rbp-30h]

  v42 = __readfsqword(0x28u);
  v9 = *(_QWORD *)(*a1 + 24);
  v10 = *(unsigned __int8 **)(a1[1] + 8);
  if ( *(_DWORD *)(v9 + 168) < (int)sub_D9CE0(*a3, 1u, a7, (__int64)a3, a4, a5, a6) )
  {
    v30 = *a1;
    *((_DWORD *)a1 + 9) = 1;
    sub_F11D0(
      v30,
      "LIKE or GLOB pattern too complex",
      -1,
      1,
      (__int64 (__fastcall *)(__int64))0xFFFFFFFFFFFFFFFFLL,
      v14);
    return __readfsqword(0x28u) ^ v42;
  }
  if ( a2 != 3 )
  {
    v15 = v10[2];
    goto LABEL_4;
  }
  v31 = (unsigned __int8 *)sub_D9DB0(a3[2], 1u, a7, v11, v12, v13, v14);
  v41 = v31;
  if ( v31 )
  {
    v33 = *v31;
    if ( v31 == (unsigned __int8 *)-1LL || !v33 )
    {
LABEL_24:
      v38 = *a1;
      *((_DWORD *)a1 + 9) = 1;
      sub_F11D0(
        v38,
        "ESCAPE expression must be a single character",
        -1,
        1,
        (__int64 (__fastcall *)(__int64))0xFFFFFFFFFFFFFFFFLL,
        v32);
      return __readfsqword(0x28u) ^ v42;
    }
    v34 = 0;
    while ( 1 )
    {
      v35 = v31 + 1;
      v36 = v31[1];
      v37 = v33 <= 0xBFu;
      v33 = v36;
      if ( !v37 )
      {
        if ( (v36 & 0xC0) == 0x80 )
        {
          v31 = v35;
          do
            v33 = *++v31;
          while ( (*v31 & 0xC0) == 0x80 );
          goto LABEL_16;
        }
        v33 = v36;
      }
      v31 = v35;
LABEL_16:
      ++v34;
      if ( v31 == (unsigned __int8 *)-1LL || !v33 )
      {
        if ( v34 != 1 )
          goto LABEL_24;
        v15 = sub_C2340(&v41);
        if ( *v10 == v15 || v10[1] == v15 )
        {
          v39 = *(_DWORD *)v10;
          v11 = (unsigned __int8)v39;
          v40 = *(_DWORD *)v10;
          if ( v15 == (unsigned __int8)v39 )
            LOBYTE(v40) = 0;
          v10 = (unsigned __int8 *)&v40;
          if ( BYTE1(v39) == v15 )
            BYTE1(v40) = 0;
        }
LABEL_4:
        v16 = (unsigned __int8 *)sub_D9DB0(*a3, 1u, a7, v11, v12, v13, v14);
        v21 = (char *)sub_D9DB0(a3[1], 1u, a7, v17, v18, v19, v20);
        if ( v21 && v16 )
        {
          v22 = sub_C83C0(v16, v21, v10, v15);
          v27 = *a1;
          v28 = v22 == 0;
          if ( (*(_WORD *)(*a1 + 20) & 0x9000) != 0 )
          {
            sub_C9430(v27, v28, v23, v24, v25, v26);
          }
          else
          {
            *(_QWORD *)v27 = v28;
            *(_WORD *)(v27 + 20) = 4;
          }
        }
        return __readfsqword(0x28u) ^ v42;
      }
    }
  }
  return __readfsqword(0x28u) ^ v42;
}
