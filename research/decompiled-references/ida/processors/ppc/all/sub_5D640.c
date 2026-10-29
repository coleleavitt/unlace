__int64 __fastcall sub_5D640(__int64 *a1, __int64 a2, char a3)
{
  char *v4; // r12
  _QWORD *v5; // rax
  __int64 v6; // rdi
  unsigned int v7; // ecx
  unsigned int v8; // eax
  __int64 *v9; // r14
  unsigned int v10; // ebx
  __int64 *v13; // [rsp+4h] [rbp-1C8h] BYREF
  __int128 v14; // [rsp+Ch] [rbp-1C0h]
  char v15; // [rsp+1Ch] [rbp-1B0h]
  __int128 v16; // [rsp+24h] [rbp-1A8h] BYREF
  __int64 v17; // [rsp+34h] [rbp-198h]
  __int64 v18; // [rsp+3Ch] [rbp-190h]
  __int64 v19; // [rsp+44h] [rbp-188h]
  _BYTE v20[40]; // [rsp+4Ch] [rbp-180h] BYREF
  char v21; // [rsp+74h] [rbp-158h] BYREF
  _QWORD v22[8]; // [rsp+18Ch] [rbp-40h] BYREF

  v4 = v20;
  v22[0] = __readfsqword(0x28u);
  v16 = -1;
  v5 = v20;
  v17 = -1;
  v18 = 0;
  v19 = 0;
  do
  {
    *(_WORD *)v5 = 0;
    v5 += 5;
    *((_WORD *)v5 - 19) = 0;
    *((_WORD *)v5 - 18) = 0;
    *((_DWORD *)v5 - 2) = 0;
    *((_WORD *)v5 - 17) = 0;
    *((_OWORD *)v5 - 2) = 0;
    *(v5 - 2) = 0;
  }
  while ( v5 != v22 );
  if ( (int)decode_insn(&v16, *(_QWORD *)(a2 + 8), v22, 0.0) <= 0 )
    return 0;
  v6 = *a1;
  if ( (*(_BYTE *)(a2 + 18) & 1) == 0 )
    v4 = &v21;
  v15 = 0;
  v7 = *((unsigned __int16 *)v4 + 3);
  v14 = 0;
  v13 = nullptr;
  LOBYTE(v8) = sub_5B9B0(v6, (__int64 *)&v13, v17, v7, 0, 0);
  v9 = v13;
  v10 = v8;
  if ( (_BYTE)v8 )
  {
    v10 = sub_5D2E0((__int64)a1, &v13, (__int64)&v16, (__int64)(v4 + 40), a3);
    if ( !v9 )
      return v10;
    goto LABEL_8;
  }
  if ( v13 )
LABEL_8:
    qfree(v9, (const char *)&v13);
  return v10;
}

