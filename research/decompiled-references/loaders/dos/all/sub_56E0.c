unsigned __int64 __fastcall sub_56E0(__int64 a1, int a2, __int64 a3, __int64 *a4, __int64 a5, double a6, double a7)
{
  __int64 v9; // rbp
  __int64 v10; // rdx
  _BOOL8 v11; // r8
  __int64 v12; // rsi
  __int64 v13; // rcx
  unsigned int v14; // r15d
  __int64 word; // rbx
  __int64 v16; // rdi
  __int64 v17; // rbx
  __int64 v18; // rbx
  __int64 v19; // rbp
  __int64 v20; // rax
  __int64 v21; // rcx
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rbx
  unsigned __int16 *v25; // r15
  unsigned __int16 *v26; // rbp
  __int64 v27; // rbx
  __int64 v28; // rbx
  __int64 v29; // rsi
  unsigned __int16 v30; // ax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  unsigned __int16 v35; // r14
  __int64 v39; // [rsp+10h] [rbp-B8h]
  int v40; // [rsp+18h] [rbp-B0h]
  unsigned __int16 v41; // [rsp+28h] [rbp-A0h] BYREF
  __int64 v42; // [rsp+30h] [rbp-98h] BYREF
  __m128i si128; // [rsp+38h] [rbp-90h]
  __int64 v44; // [rsp+48h] [rbp-80h]
  __int64 v45; // [rsp+50h] [rbp-78h]
  char v46[4]; // [rsp+60h] [rbp-68h] BYREF
  int v47; // [rsp+64h] [rbp-64h]
  unsigned __int16 v48; // [rsp+68h] [rbp-60h]
  unsigned __int16 v49; // [rsp+6Ah] [rbp-5Eh]
  unsigned __int16 v50; // [rsp+6Ch] [rbp-5Ch]
  unsigned __int64 v51; // [rsp+88h] [rbp-40h]

  v51 = __readfsqword(0x28u);
  v9 = a3 + 32;
  if ( get_bytes(v46, 32, a3, 0, 0) != 32
    || (sub_31F0((__int64)"Overlay stub at %a, code at %a...\n", a6, a7), v46[0] != -51) )
  {
LABEL_26:
    sub_3450();
  }
  v10 = *a4;
  v11 = a5 != 0;
  v12 = a5 + v47;
  if ( v48 )
  {
    v13 = v48 + v10;
    a4[1] = v13;
    file2base(a1, v12, v10, v13, v11);
  }
  else
  {
    a4[1] = v10 + 1;
    v48 = 1;
    file2base(a1, v12, v10, v10 + 1, v11);
    *((_BYTE *)a4 + 184) = 7;
    v48 = 0;
  }
  v14 = 0;
  while ( v14 < v50 )
  {
    ++v14;
    show_auto(v9, 0);
    put_byte(v9, 234);
    word = (unsigned __int16)get_word(v9 + 2);
    put_word(v9 + 1, word);
    v16 = v9 + 3;
    v9 += 5;
    put_word(v16, a4[6]);
    v17 = 16 * sel2para(a4[6]) + word;
    auto_mark_range(v17, v17 + 1, 20);
    auto_mark_range(v17, v17 + 1, 30);
    sub_3490();
  }
  v18 = a5 + v48 + (__int64)v47;
  qlseek(a1, v18, 0);
  v42 = 2;
  v44 = 0;
  v45 = 0;
  LOWORD(v19) = v49 >> 1;
  si128 = _mm_load_si128((const __m128i *)&xmmword_8C20);
  if ( v18 == -1 )
    v18 = qlseek(a1, 0, 1);
  v20 = qlsize(a1);
  v21 = (unsigned __int16)v19;
  v22 = v20 - v18;
  if ( ((v22 | v18) & 0x8000000000000000LL) == 0LL )
  {
    if ( (_WORD)v19 )
    {
      v23 = 2LL * (unsigned __int16)v19;
      v19 = (unsigned __int16)v19;
      v24 = (unsigned __int16)v19;
      if ( v22 >= v23 )
        goto LABEL_17;
      v24 = v22 >> 1;
      v19 = (unsigned int)(v22 >> 1);
      if ( (unsigned int)sub_32C0(
                           1u,
                           (__int64)"AUTOHIDE SESSION\n"
                                    "HIDECANCEL\n"
                                    "%s %llu is incorrect, maximum possible value is %llu%s",
                           "Relocation count",
                           v21,
                           v22 >> 1,
                           ". Do you want to continue with the new value?") != 1 )
LABEL_11:
        sub_33A0(0);
      if ( v24 )
      {
LABEL_17:
        v39 = qcalloc(v24, 2, v23, v21);
        if ( !v39 )
          sub_5210((__int64)"overlay relocation table");
        lread(a1, v39, 2 * v24);
        v25 = (unsigned __int16 *)(v39 + 2 * v19);
        v26 = (unsigned __int16 *)v39;
        v40 = qlseek(a1, 0, 1);
        do
        {
          v27 = *v26;
          if ( v48 < (unsigned __int16)v27 )
            goto LABEL_26;
          v28 = *a4 + v27;
          v29 = 0;
          ++v26;
          show_auto(v28, 0);
          v30 = get_word(v28);
          v35 = v30;
          if ( a2 )
          {
            v29 = a2 + (unsigned int)v30;
            if ( sub_4EE0(a1, v29, (__int64)&v41, 8) )
              goto LABEL_26;
            v35 = v41;
          }
          si128.m128i_i64[1] = getinf(12, v29, v31, v32, v33, v34) + v35;
          set_fixup(v28, &v42);
          put_word(v28, si128.m128i_u16[4]);
          sub_3490();
        }
        while ( v26 != v25 );
        qfree(v39);
        qlseek(a1, v40, 0);
      }
    }
  }
  else if ( (unsigned int)sub_32C0(
                            1u,
                            (__int64)"AUTOHIDE SESSION\n"
                                     "HIDECANCEL\n"
                                     "%s %llu is incorrect, maximum possible value is %llu%s",
                            "Relocation count",
                            (unsigned __int16)v19,
                            0,
                            ". Do you want to continue with the new value?") != 1 )
  {
    goto LABEL_11;
  }
  return v51 - __readfsqword(0x28u);
}
