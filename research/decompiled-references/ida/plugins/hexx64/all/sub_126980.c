__int64 __fastcall sub_126980(__int64 a1, int a2, int a3, char a4, double a5)
{
  unsigned int v5; // r14d
  __int64 result; // rax
  __int64 v7; // rbx
  int v9; // ebp
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdi
  unsigned __int64 v13; // r8
  char v14; // al
  __int64 v15; // rax
  int v16; // r15d
  __int64 v17; // rax
  unsigned __int64 v18; // r13
  __int64 v19; // rdi
  __int64 v20; // r15
  __int64 v21; // r13
  _QWORD *v22; // rbx
  __int64 v23; // rdi
  __int64 v24; // rdi
  __int64 v25; // rsi
  __int64 v26; // r15
  int v27; // edx
  unsigned __int8 v28; // al
  char v29; // dl
  char v30; // cl
  __int16 v31; // cx
  __int64 v32; // rsi
  char tinfo_property; // al
  char v34; // cl
  char v35; // dl
  char v36; // cl
  bool v37; // zf
  char v38; // al
  __int64 v39; // rdi
  char v41; // [rsp+Ch] [rbp-8Ch]
  unsigned __int8 v42; // [rsp+Ch] [rbp-8Ch]
  __int64 v43; // [rsp+10h] [rbp-88h]
  unsigned __int64 v44; // [rsp+20h] [rbp-78h]
  __int64 v45; // [rsp+28h] [rbp-70h]
  char v46; // [rsp+30h] [rbp-68h]
  __int64 v47; // [rsp+38h] [rbp-60h] BYREF
  unsigned __int64 v48; // [rsp+40h] [rbp-58h] BYREF
  __int128 v49; // [rsp+48h] [rbp-50h]
  unsigned __int64 v50; // [rsp+58h] [rbp-40h]

  v5 = a2 + a3;
  v50 = __readfsqword(0x28u);
  result = 0;
  if ( a2 + a3 <= *(_DWORD *)(a1 + 4) )
  {
    v7 = a1;
    v46 = 0;
    v9 = a3;
    if ( (get_tinfo_property() & 0x2F) != 0xD )
      goto LABEL_21;
    v12 = *(_QWORD *)(a1 + 8);
    v13 = *(int *)(v7 + 4);
    v47 = a2;
    if ( !(unsigned __int8)sub_1C50C0(v12, *(_QWORD *)(*(_QWORD *)(v12 + 16) + 1496LL), &v47, v9, v13) )
    {
LABEL_4:
      v14 = 0;
LABEL_36:
      v42 = v14;
      clear_tinfo_t();
      return v42;
    }
    v15 = *(_QWORD *)(v7 + 8);
    a5 = 0.0;
    v49 = 0;
    v48 = 0;
    sub_3349B0((__int64)&v48, (const void *)(v15 + 48), v47, nullptr, 3);
    if ( (_QWORD)v49 )
    {
      v16 = 0;
      v17 = 0;
      while ( 1 )
      {
        v18 = v48 + (v17 << 6);
        if ( v9 == get_tinfo_size() && (get_tinfo_property() & 0xF) != 0xE )
          break;
        v17 = ++v16;
        if ( v16 >= (unsigned __int64)v49 )
          goto LABEL_11;
      }
      v10 = *(_QWORD *)(v18 + 56);
      *(_QWORD *)(v18 + 56) = 0;
      v46 = v10;
LABEL_11:
      v19 = v48;
      if ( !v48 )
        goto LABEL_21;
      if ( (_QWORD)v49 )
      {
        v43 = v7;
        v20 = 0;
        v21 = v49;
        do
        {
          v22 = (_QWORD *)(v19 + (v20 << 6));
          clear_tinfo_t();
          v23 = v22[4];
          if ( v23 )
          {
            v22[5] = 0;
            qfree(v23);
          }
          v24 = v22[1];
          if ( v24 )
          {
            v22[2] = 0;
            qfree(v24);
          }
          ++v20;
          v19 = v48;
        }
        while ( v21 != v20 );
        v7 = v43;
      }
    }
    else
    {
      v19 = v48;
      if ( !v48 )
      {
LABEL_21:
        if ( !v46 && (a4 & 2) == 0 && (v9 > 16 || (v9 & (v9 - 1)) != 0) )
          goto LABEL_4;
        v25 = v7;
        *(_QWORD *)&v49 = 0;
        sub_123A40((__int64)&v48, (unsigned __int8 *)v7, v10, v11);
        v26 = v49;
        v27 = *(_DWORD *)(v7 + 4);
        v44 = v48;
        v45 = *(_QWORD *)(*(_QWORD *)(v49 + 16) + 1504LL);
        if ( v5 != v27 )
        {
          v25 = *(_QWORD *)(*(_QWORD *)(v49 + 16) + 1504LL);
          if ( !(unsigned __int8)sub_1C28A0(v49, v45, v27, v5) )
            goto LABEL_38;
        }
        if ( *(_DWORD *)v26 != 2 )
        {
          if ( !under_debugger )
            sub_383060(0xC9F2u, a5);
          BUG();
        }
        if ( !a2 )
          goto LABEL_28;
        v25 = v45;
        if ( !(unsigned __int8)sub_1C55E0((unsigned int *)v26, v45, a2, v5, a4 & 1) )
        {
LABEL_38:
          v9 = HIDWORD(v44);
          v38 = 0;
LABEL_35:
          v41 = v38;
          v48 = __PAIR64__(v9, v44);
          *(_QWORD *)&v49 = v26;
          sub_11CDA0((__int64)&v48);
          v14 = v41;
          goto LABEL_36;
        }
        if ( *(_DWORD *)v26 == 2 )
        {
LABEL_28:
          if ( (a4 & 1) != 0 )
          {
            HIDWORD(v48) = v9;
            sub_1267B0((__int64)&v48, v25, a5);
            v26 = v49;
            v44 = v48;
          }
          else
          {
            HIDWORD(v44) = v9;
          }
          if ( (_BYTE)v44 == 15 )
          {
            if ( v46 )
            {
              v47 = 0;
              copy_tinfo_t();
            }
            else
            {
              sub_32C270(&v47, v45, v9);
            }
            copy_tinfo_t();
            clear_tinfo_t();
            v39 = *(_QWORD *)(v26 + 24);
            if ( v39 )
            {
              *(_QWORD *)(v26 + 32) = 0;
              qfree(v39);
              *(_QWORD *)(v26 + 24) = 0;
              *(_QWORD *)(v26 + 40) = 0;
            }
          }
          v28 = *(_BYTE *)v7;
          v29 = *(_BYTE *)(v7 + 1);
          *(_BYTE *)v7 = v44;
          v30 = BYTE1(v44);
          v9 = *(_DWORD *)(v7 + 4);
          BYTE1(v44) = v29;
          *(_BYTE *)(v7 + 1) = v30;
          v31 = *(_WORD *)(v7 + 2);
          *(_WORD *)(v7 + 2) = WORD1(v44);
          WORD1(v44) = v31;
          *(_DWORD *)(v7 + 4) = HIDWORD(v44);
          v32 = *(_QWORD *)(v7 + 8);
          LOBYTE(v44) = v28;
          *(_QWORD *)(v7 + 8) = v26;
          v26 = v32;
        }
        else
        {
          sub_126420(v7, *(_QWORD *)(v26 + 16), v26, v9, a5);
        }
        tinfo_property = get_tinfo_property();
        v34 = *(_BYTE *)(v7 + 1);
        v35 = v34 & 0xFD;
        v36 = v34 | 2;
        v37 = (tinfo_property & 0x2F) == 13;
        v38 = 1;
        if ( v37 )
          v35 = v36;
        *(_BYTE *)(v7 + 1) = v35;
        goto LABEL_35;
      }
    }
    *(_QWORD *)&v49 = 0;
    qfree(v19);
    goto LABEL_21;
  }
  return result;
}

