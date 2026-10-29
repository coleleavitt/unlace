__int64 __fastcall sub_143450(__m128i *a1, int a2, __int64 **a3, int a4, double a5)
{
  const char *v7; // rbx
  __int32 v8; // ebp
  unsigned int v9; // ebp
  unsigned int v10; // ebp
  __int64 v11; // rax
  __int64 v12; // r13
  __int64 v13; // rdi
  __int128 *v14; // rcx
  unsigned int v15; // r14d
  int v16; // eax
  const char *v17; // rax
  __int64 v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rdi
  unsigned int v21; // ecx
  int v23; // edx
  __int8 v24; // dl
  bool v25; // zf
  char v26; // al
  unsigned __int8 v27; // si
  __int64 v28; // rax
  __int64 v29; // rax
  int v30; // edx
  int v31; // ecx
  __int64 v32; // rdx
  unsigned __int8 v33; // al
  __int64 v34; // rax
  __int64 v35; // r14
  _QWORD *v36; // rbx
  unsigned int v37; // eax
  __int64 v38; // rax
  __int128 *v39; // [rsp+8h] [rbp-F0h]
  unsigned int v40; // [rsp+8h] [rbp-F0h]
  unsigned int v41; // [rsp+8h] [rbp-F0h]
  unsigned int v42; // [rsp+8h] [rbp-F0h]
  __int64 v44; // [rsp+20h] [rbp-D8h]
  int v45; // [rsp+2Ch] [rbp-CCh]
  _QWORD v46[2]; // [rsp+30h] [rbp-C8h] BYREF
  int v47; // [rsp+40h] [rbp-B8h]
  unsigned int v48; // [rsp+44h] [rbp-B4h]
  int v49; // [rsp+48h] [rbp-B0h]
  __int64 v50; // [rsp+4Ch] [rbp-ACh]
  __int128 v51; // [rsp+60h] [rbp-98h] BYREF
  int v52; // [rsp+70h] [rbp-88h]
  _QWORD v53[15]; // [rsp+80h] [rbp-78h] BYREF

  v7 = "sqlite_master";
  v8 = a1[2].m128i_i32[3];
  a1[12].m128i_i8[5] = 1;
  v53[7] = __readfsqword(0x28u);
  v46[0] = a1;
  v9 = v8 | 0xFFFFFFBF;
  v46[1] = a3;
  v53[0] = "table";
  v47 = a2;
  v49 = a4;
  if ( a2 == 1 )
    v7 = "sqlite_temp_master";
  v53[1] = v7;
  v53[2] = v7;
  v53[3] = "1";
  v53[5] = 0;
  v48 = 0;
  v50 = 0;
  v53[4] = "CREATE TABLE x(type text,name text,tbl_name text,rootpage int,sql text)";
  sub_15B3A0(v46, 5, v53, 0);
  a1[2].m128i_i32[3] &= v9;
  v10 = v48;
  if ( !v48 )
  {
    v11 = a1[2].m128i_i64[0];
    v44 = 32LL * a2;
    v12 = v11 + v44;
    v13 = *(_QWORD *)(v11 + v44 + 8);
    if ( !v13 )
    {
      *(_WORD *)(*(_QWORD *)(v11 + 56) + 114LL) |= 1u;
      goto LABEL_19;
    }
    if ( !*(_BYTE *)(v13 + 17) || (sub_CC740(v13), (v13 = *(_QWORD *)(v12 + 8)) != 0) )
    {
      if ( *(_BYTE *)(v13 + 16) )
      {
        v45 = 0;
LABEL_8:
        v14 = &v51;
        v15 = 0;
        while ( 1 )
        {
          ++v15;
          v39 = v14;
          sub_D5B70(v13, v15, v14);
          v14 = (__int128 *)((char *)v39 + 4);
          if ( v15 == 5 )
            break;
          v13 = *(_QWORD *)(v12 + 8);
        }
        if ( (a1[3].m128i_i8[3] & 2) != 0 )
        {
          a5 = 0.0;
          v52 = 0;
          v23 = 0;
          v51 = 0;
        }
        else
        {
          v23 = v51;
        }
        **(_DWORD **)(v12 + 24) = v23;
        if ( v52 )
        {
          if ( a2 || (a1[2].m128i_i8[12] & 0x40) != 0 )
          {
            v24 = a1[6].m128i_i8[4];
            if ( (v52 & 3) != v24 )
            {
              v18 = (__int64)a1;
              v10 = 1;
              sub_DC7E0(a3, (__int64)a1, "attached databases must use the same text encoding as main database");
LABEL_31:
              v20 = *(_QWORD *)(v12 + 8);
              if ( v45 )
              {
                sub_119A70(v20, v18);
                v20 = *(_QWORD *)(v12 + 8);
              }
              if ( !*(_BYTE *)(v20 + 17) || (v25 = *(_DWORD *)(v20 + 20) == 1, --*(_DWORD *)(v20 + 20), !v25) )
              {
LABEL_35:
                if ( !v10 )
                  goto LABEL_19;
                goto LABEL_16;
              }
              v21 = v10;
LABEL_68:
              v42 = v21;
              sub_CC7D0(v20, v18, v19);
              v10 = v42;
              goto LABEL_35;
            }
          }
          else
          {
            v26 = v52 & 3;
            v27 = v52 & 3;
            if ( (v52 & 3) == 0 )
            {
              v27 = 1;
              v26 = 1;
            }
            a1[6].m128i_i8[4] = v26;
            v28 = sub_E31C0((__int64)a1, v27, "BINARY");
            v24 = a1[6].m128i_i8[4];
            a1[1].m128i_i64[0] = v28;
          }
        }
        else
        {
          v24 = a1[6].m128i_i8[4];
        }
        *(_BYTE *)(*(_QWORD *)(v12 + 24) + 113LL) = v24;
        v29 = *(_QWORD *)(v12 + 24);
        if ( !*(_DWORD *)(v29 + 116) )
        {
          v30 = DWORD2(v51);
          if ( SDWORD2(v51) < 0 )
          {
            v30 = 0x7FFFFFFF;
            if ( DWORD2(v51) != 0x80000000 )
              v30 = -DWORD2(v51);
          }
          else if ( !DWORD2(v51) )
          {
            v30 = -2000;
          }
          *(_DWORD *)(v29 + 116) = v30;
          sub_CCE00(*(_QWORD *)(v12 + 8), *(unsigned int *)(*(_QWORD *)(v12 + 24) + 116LL));
          v29 = *(_QWORD *)(v12 + 24);
        }
        v31 = DWORD1(v51);
        *(_BYTE *)(v29 + 112) = BYTE4(v51);
        v32 = *(_QWORD *)(v12 + 24);
        v33 = *(_BYTE *)(v32 + 112);
        if ( !v33 )
        {
          *(_BYTE *)(v32 + 112) = 1;
          v33 = *(_BYTE *)(*(_QWORD *)(v12 + 24) + 112LL);
        }
        if ( v33 > 4u )
        {
          v18 = (__int64)a1;
          v10 = 1;
          sub_DC7E0(a3, (__int64)a1, "unsupported file format");
          goto LABEL_31;
        }
        if ( !a2 && v31 > 3 )
          a1[3].m128i_i64[0] &= ~2uLL;
        HIDWORD(v50) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 8) + 8LL) + 64LL);
        v34 = sub_E8280(
                (__int64)a1,
                "SELECT*FROM\"%w\".%s ORDER BY rowid",
                *(_QWORD *)(a1[2].m128i_i64[0] + 32LL * a2),
                v7);
        v35 = a1[31].m128i_i64[0];
        a1[31].m128i_i64[0] = 0;
        v18 = v34;
        v36 = (_QWORD *)v34;
        v37 = sub_142D90(
                (__int64)a1,
                v34,
                (unsigned int (__fastcall *)(__int64, _QWORD, __int64 *, __int64 *))sub_15B3A0,
                (__int64)v46,
                nullptr,
                a5);
        a1[31].m128i_i64[0] = v35;
        if ( v37 )
        {
          if ( !v36 )
            goto LABEL_55;
        }
        else
        {
          v37 = v48;
          if ( !v36 )
            goto LABEL_54;
        }
        v18 = (__int64)v36;
        v41 = v37;
        sub_C9250((__int64)a1, v36);
        v37 = v41;
LABEL_54:
        if ( !v37 )
        {
          v18 = (unsigned int)a2;
          sub_1432B0((__int64)a1, a2, a5);
          if ( a1[6].m128i_i8[7] )
            goto LABEL_56;
          goto LABEL_66;
        }
LABEL_55:
        if ( a1[6].m128i_i8[7] )
        {
LABEL_56:
          v10 = 7;
          sub_D8BB0(a1, v18);
          v12 = a1[2].m128i_i64[0] + v44;
          goto LABEL_31;
        }
        if ( (a1[3].m128i_i8[3] & 8) == 0 )
        {
          v10 = v37;
          goto LABEL_31;
        }
        if ( v37 == 7 )
        {
          v10 = 7;
          goto LABEL_31;
        }
LABEL_66:
        v38 = *(_QWORD *)(a1[2].m128i_i64[0] + v44 + 24);
        *(_WORD *)(v38 + 114) |= 1u;
        goto LABEL_31;
      }
    }
    v16 = sub_110580(v13, 0, 0);
    if ( !v16 )
    {
      v45 = 1;
      v13 = *(_QWORD *)(v12 + 8);
      goto LABEL_8;
    }
    v40 = v16;
    v17 = sub_D1BA0(v16);
    v18 = (__int64)a1;
    sub_DC7E0(a3, (__int64)a1, v17);
    v20 = *(_QWORD *)(v12 + 8);
    v21 = v40;
    if ( *(_BYTE *)(v20 + 17) )
    {
      v25 = (*(_DWORD *)(v20 + 20))-- == 1;
      if ( v25 )
        goto LABEL_68;
    }
    v10 = v40;
  }
LABEL_16:
  if ( (v10 == 7 || v10 == 3082) && !a1[6].m128i_i8[7] && !a1[6].m128i_i8[8] )
    sub_DBE60((__int64)a1);
  sub_D8CC0((__int64)a1, (unsigned int)a2);
LABEL_19:
  a1[12].m128i_i8[5] = 0;
  return v10;
}
