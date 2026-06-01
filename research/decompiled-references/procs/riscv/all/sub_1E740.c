__int64 __fastcall sub_1E740(_BYTE *a1)
{
  unsigned int v1; // ebp
  _BYTE *v2; // rbx
  char v3; // al
  __int64 (__fastcall *v4)(_BYTE *, char); // rax
  __int64 v5; // r13
  unsigned __int64 v6; // r14
  __int64 v7; // r8
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int16 v12; // ax
  int v13; // eax
  char **v14; // rbx
  __int64 v15; // r12
  __int64 v16; // rcx
  __int16 v17; // r14
  unsigned __int8 v18; // bp
  __int64 v19; // r9
  char *v20; // rax
  __int64 v21; // rdx
  const char *v22; // rcx
  int v23; // esi
  __int64 (__fastcall *v24)(_BYTE *, char); // rax
  __int64 v25; // r8
  unsigned __int64 v26; // rdx
  __int64 v27; // rsi
  void *v28; // rsi
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // [rsp+0h] [rbp-1D8h]
  unsigned __int64 v33; // [rsp+0h] [rbp-1D8h]
  __int64 v34; // [rsp+8h] [rbp-1D0h]
  void *v35; // [rsp+10h] [rbp-1C8h] BYREF
  __int128 v36; // [rsp+18h] [rbp-1C0h]
  __int128 v37; // [rsp+30h] [rbp-1A8h] BYREF
  __int64 v38; // [rsp+40h] [rbp-198h]
  __int64 v39; // [rsp+48h] [rbp-190h]
  __int64 v40; // [rsp+50h] [rbp-188h]
  char v41; // [rsp+58h] [rbp-180h] BYREF
  _QWORD v42[8]; // [rsp+198h] [rbp-40h] BYREF

  v1 = 0;
  v42[0] = __readfsqword(0x28u);
  v2 = a1 + 265;
  (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 296LL))(a1);
  v3 = 0;
  while ( *v2 )
  {
    if ( (v2[3] & 8) != 0 )
    {
      if ( v3 )
      {
        (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)a1 + 32LL))(a1, 44);
        v4 = *(__int64 (__fastcall **)(_BYTE *, char))(*(_QWORD *)a1 + 96LL);
        if ( (char *)v4 == (char *)sub_1D5C0 )
        {
          v5 = *((_QWORD *)a1 + 4);
          if ( v5 )
          {
            v6 = v5 + 1;
            v7 = *((_QWORD *)a1 + 4);
            v8 = *((_QWORD *)a1 + 3);
            --v5;
            if ( *((_QWORD *)a1 + 5) >= v6 )
              goto LABEL_8;
LABEL_35:
            v32 = v7;
            v30 = qvector_reserve(a1 + 24, v8, v6, 1);
            v7 = v32;
            *((_QWORD *)a1 + 3) = v30;
            v8 = v30;
          }
          else
          {
            v8 = *((_QWORD *)a1 + 3);
            v7 = 1;
            v6 = 2;
            if ( *((_QWORD *)a1 + 5) < 2u )
              goto LABEL_35;
          }
LABEL_8:
          *((_QWORD *)a1 + 4) = v6;
          *(_BYTE *)(v8 + v5) = 32;
          *(_BYTE *)(*((_QWORD *)a1 + 3) + v7) = 0;
        }
        else
        {
          v4(a1, 32);
        }
      }
      (*(void (__fastcall **)(_BYTE *, _QWORD))(*(_QWORD *)a1 + 304LL))(a1, v1);
      v3 = 1;
    }
    ++v1;
    v2 += 40;
    if ( v1 == 8 )
      break;
  }
  (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 320LL))(a1);
  v12 = *((_WORD *)a1 + 124);
  if ( v12 == 141 || v12 == 4 )
    (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 376LL))(a1);
  v13 = (char)a1[257];
  if ( a1[257] )
  {
    v14 = &off_33A60;
    v15 = *((_QWORD *)a1 + 77);
    while ( 1 )
    {
      v16 = *((unsigned __int16 *)v14 + 4);
      if ( ((unsigned int)v16 & v13) != 0 )
      {
        v17 = *(_WORD *)(v15 + 468);
        *(_WORD *)(v15 + 468) = v16 | v17 & 0xFF3D;
        v18 = getinf_flag(11, 4, v9, v16, v10, v11);
        setinf_flag(11, 4, 0);
        v20 = &v41;
        v38 = -1;
        v39 = 0;
        v40 = 0;
        v37 = -1;
        do
        {
          *(_WORD *)v20 = 0;
          v20 += 40;
          *((_WORD *)v20 - 19) = 0;
          *((_WORD *)v20 - 18) = 0;
          *((_DWORD *)v20 - 2) = 0;
          *((_WORD *)v20 - 17) = 0;
          *((_OWORD *)v20 - 2) = 0;
          *((_QWORD *)v20 - 2) = 0;
        }
        while ( v20 != (char *)v42 );
        if ( (int)decode_insn(&v37, *((_QWORD *)a1 + 30), v42, 0, 0, v19, 0.0) > 0 )
        {
          v21 = *((_QWORD *)a1 + 78);
          v22 = nullptr;
          v35 = nullptr;
          v23 = *(_DWORD *)(v21 + 104);
          v36 = 0;
          if ( (unsigned __int16)v39 >= v23 && (unsigned __int16)v39 < *(int *)(v21 + 108) )
            v22 = *(const char **)(*(_QWORD *)(v21 + 112) + 16LL * ((unsigned __int16)v39 - v23));
          sub_B630((__int64 *)&v35, (__int64)"; alt %s: %s", *v14, v22);
          v24 = *(__int64 (__fastcall **)(_BYTE *, char))(*(_QWORD *)a1 + 96LL);
          if ( (char *)v24 == (char *)sub_1D5C0 )
          {
            v25 = *((_QWORD *)a1 + 4);
            v26 = 2;
            if ( v25 )
              v26 = v25-- + 1;
            v27 = *((_QWORD *)a1 + 3);
            if ( *((_QWORD *)a1 + 5) < v26 )
            {
              v34 = v25;
              v33 = v26;
              v31 = qvector_reserve(a1 + 24, v27, v26, 1);
              v25 = v34;
              v26 = v33;
              *((_QWORD *)a1 + 3) = v31;
              v27 = v31;
            }
            *((_QWORD *)a1 + 4) = v26;
            *(_BYTE *)(v27 + v25) = 32;
            *(_BYTE *)(*((_QWORD *)a1 + 3) + v25 + 1) = 0;
          }
          else
          {
            v24(a1, 32);
          }
          v28 = &unk_2B040;
          if ( (_QWORD)v36 )
            v28 = v35;
          (*(void (__fastcall **)(_BYTE *, void *, __int64))(*(_QWORD *)a1 + 56LL))(a1, v28, 4);
          if ( v35 )
          {
            *(_QWORD *)&v36 = 0;
            qfree(v35);
          }
        }
        *(_WORD *)(v15 + 468) = v17;
        setinf_flag(11, 4, v18);
      }
      v14 += 2;
      if ( &off_33A80 == (_UNKNOWN **)v14 )
        break;
      v13 = (char)a1[257];
    }
  }
  return (*(__int64 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)a1 + 128LL))(a1, 0xFFFFFFFFLL);
}
