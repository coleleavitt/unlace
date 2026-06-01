__int64 __fastcall sub_57380(__int64 *a1, _QWORD *a2, _QWORD *a3, __int64 a4, int a5)
{
  char *v7; // rax
  unsigned __int64 v8; // rdx
  int v10; // ebp
  __int64 v11; // rdi
  unsigned int v12; // eax
  unsigned int v13; // edx
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // rbp
  __int64 v17; // rbx
  __int64 v18; // rbp
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rbx
  unsigned __int16 v22; // r12
  int v23; // eax
  unsigned __int8 v25; // [rsp+0h] [rbp-1D8h]
  unsigned __int8 v26; // [rsp+0h] [rbp-1D8h]
  unsigned __int8 v27; // [rsp+Fh] [rbp-1C9h]
  unsigned __int64 *v28; // [rsp+10h] [rbp-1C8h] BYREF
  __int128 v29; // [rsp+18h] [rbp-1C0h]
  char v30; // [rsp+28h] [rbp-1B0h]
  __int128 v31; // [rsp+30h] [rbp-1A8h] BYREF
  __int64 v32; // [rsp+40h] [rbp-198h]
  __int64 v33; // [rsp+48h] [rbp-190h]
  __int64 v34; // [rsp+50h] [rbp-188h]
  char v35; // [rsp+58h] [rbp-180h] BYREF
  unsigned __int16 v36; // [rsp+5Eh] [rbp-17Ah]
  __int16 v37; // [rsp+86h] [rbp-152h]
  __int64 v38; // [rsp+90h] [rbp-148h]
  _QWORD v39[8]; // [rsp+198h] [rbp-40h] BYREF

  v7 = &v35;
  v8 = (unsigned __int64)v39;
  v39[0] = __readfsqword(0x28u);
  v31 = -1;
  v32 = -1;
  v33 = 0;
  v34 = 0;
  do
  {
    *(_WORD *)v7 = 0;
    v7 += 40;
    *((_WORD *)v7 - 19) = 0;
    *((_WORD *)v7 - 18) = 0;
    *((_DWORD *)v7 - 2) = 0;
    *((_WORD *)v7 - 17) = 0;
    *((_OWORD *)v7 - 2) = 0;
    *((_QWORD *)v7 - 2) = 0;
  }
  while ( v7 != (char *)v39 );
  v10 = 0;
  if ( a5 > 0 )
  {
    while ( (unsigned int)decode_insn(&v31, a4, v8, 0.0) )
    {
      if ( (_WORD)v33 != 206 || v37 != 1 && v37 != *((_WORD *)a1 + 85) )
        goto LABEL_6;
      v11 = *a1;
      v28 = nullptr;
      v30 = 0;
      v29 = 0;
      v12 = sub_5B9B0(v11, &v28, v32, v36, 0, 0);
      v8 = v12;
      if ( (_BYTE)v12 && (_QWORD)v29 == 1 && *((_WORD *)v28 + 8) == 286 && (unsigned __int8)(v30 - 10) <= 1u )
      {
        v15 = *v28;
        v16 = *v28 >> 16;
        if ( v28 )
        {
          v27 = v12;
          *(_QWORD *)&v29 = 0;
          qfree(v28, (const char *)&v28);
          v8 = v27;
        }
        *a2 = BYTE3(v15);
        *a3 = (unsigned __int8)v16;
        if ( (unsigned __int64)(*a2 - 1LL) <= 7 && (unsigned __int8)v16 <= 8uLL )
        {
          if ( (v17 = v32 + WORD1(v33), v25 = v8, v18 = v38, v19 = decode_insn(&v31, v17, v8, 0.0), v20 = v25, v19)
            && (_WORD)v33 == 4
            || (unsigned int)decode_insn(&v31, v17 + WORD1(v33), v25, 0.0) && (v20 = v25, (_WORD)v33 == 4) )
          {
            if ( v37 == 1 || v37 == *((_WORD *)a1 + 85) )
            {
              if ( (v21 = v32 + WORD1(v33), v26 = v20, v22 = v36, v23 = decode_insn(&v31, v21, v20, 0.0), v13 = v26, v23)
                && (_WORD)v33 == 206
                || (unsigned int)decode_insn(&v31, v21 + WORD1(v33), v26, 0.0) && (v13 = v26, (_WORD)v33 == 206) )
              {
                if ( v36 == v22 )
                {
                  if ( v38 != v18 + 4 )
                    LOBYTE(v13) = v18 + 8 == v38;
                  return v13;
                }
              }
            }
          }
        }
        return 0;
      }
      if ( v28 )
      {
        *(_QWORD *)&v29 = 0;
        ++v10;
        qfree(v28, (const char *)&v28, v12);
        a4 += WORD1(v33);
        if ( a5 == v10 )
          return 0;
      }
      else
      {
LABEL_6:
        ++v10;
        a4 += WORD1(v33);
        if ( a5 == v10 )
          return 0;
      }
    }
  }
  return 0;
}

