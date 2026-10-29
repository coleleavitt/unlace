unsigned __int64 __fastcall sub_3067C0(__int64 a1, __int64 *a2, __m128i a3, double a4, __m128i a5, double a6)
{
  __int64 v7; // rbp
  unsigned __int64 v8; // r13
  __int64 v9; // r8
  bool (__fastcall *v10)(__int64); // rax
  __int64 v11; // rdi
  int v12; // eax
  int v13; // r15d
  __int64 *v14; // rax
  __int64 (__fastcall *v15)(_QWORD *, unsigned __int64); // rax
  __int64 *func; // rax
  __int64 v18; // rax
  __int64 *v19; // rax
  __m128i *v20; // rdi
  bool v21; // al
  __int64 (__fastcall *v22)(__int64, __int64 *, __m128i); // rdx
  __int64 v23; // rsi
  int v24; // eax
  __int64 v26; // [rsp+8h] [rbp-90h]
  __int64 v27; // [rsp+8h] [rbp-90h]
  __int64 v28; // [rsp+8h] [rbp-90h]
  __int64 v29; // [rsp+8h] [rbp-90h]
  int v30; // [rsp+1Ch] [rbp-7Ch] BYREF
  __int64 *v31; // [rsp+20h] [rbp-78h] BYREF
  __int64 *v32; // [rsp+28h] [rbp-70h] BYREF
  __int64 *v33; // [rsp+30h] [rbp-68h] BYREF
  __int64 v34; // [rsp+38h] [rbp-60h]
  __int128 v35; // [rsp+40h] [rbp-58h]
  unsigned __int64 v36; // [rsp+58h] [rbp-40h]

  v36 = __readfsqword(0x28u);
  if ( sub_306680(a1, *(double *)a3.m128i_i64, a4, a5, a6) )
  {
    v7 = *(_QWORD *)(a1 + 48);
    if ( v7 )
    {
      v8 = 0;
      while ( 1 )
      {
        v15 = *(__int64 (__fastcall **)(_QWORD *, unsigned __int64))(*(_QWORD *)a1 + 144LL);
        if ( v15 != sub_306B80 )
        {
          v14 = (__int64 *)v15((_QWORD *)a1, v8);
LABEL_11:
          if ( v14 != (__int64 *)-1LL && v14 == a2 )
            return v8;
          goto LABEL_13;
        }
        switch_dbctx();
        if ( *(_QWORD *)(a1 + 72) )
          break;
        func = (__int64 *)get_func();
        if ( func )
        {
          v33 = func;
          v18 = *(_QWORD *)(a1 + 64);
          a3 = 0;
          v35 = 0;
          v34 = 0;
          sub_14CDC0((__int64 *)&v32, *(_QWORD *)(v18 + 112), &v33, nullptr, 1, 0.0, a4, a5, a6);
          sub_140140((__int64 **)(a1 + 72));
          v19 = v32;
          *(_QWORD *)(a1 + 72) = v32;
          if ( v19 )
            ++*((_DWORD *)v19 + 26);
          sub_140140(&v32);
          if ( v34 )
          {
            *(_QWORD *)&v35 = 0;
            qfree(v34);
          }
          v20 = *(__m128i **)(a1 + 72);
          if ( !v20 )
            goto LABEL_13;
          sub_2581E0(v20);
        }
        if ( *(_QWORD *)(a1 + 72) )
          break;
LABEL_13:
        if ( v7 == ++v8 )
          return -1;
      }
      if ( v8 >= *(_QWORD *)(a1 + 48) )
        sub_2ADE00(*(double *)a3.m128i_i64);
      v9 = *(_QWORD *)(a1 + 40) + (v8 << 6);
      v10 = **(bool (__fastcall ***)(__int64))v9;
      if ( v10 == sub_2AD1C0 )
      {
        if ( *(_QWORD *)(v9 + 8) == *(_QWORD *)(v9 + 48) )
          goto LABEL_13;
        v11 = *(_QWORD *)(a1 + 72);
        v31 = (__int64 *)v11;
        if ( v11 )
        {
LABEL_9:
          v12 = *(_DWORD *)(v11 + 104);
          *(_DWORD *)(v11 + 104) = v12 + 1;
          v13 = *(_DWORD *)(v9 + 56);
          if ( v13 != -2 )
          {
LABEL_10:
            sub_140140(&v31);
            v14 = (__int64 *)v13;
            if ( v13 == -1 )
              goto LABEL_13;
            goto LABEL_11;
          }
          v22 = *(__int64 (__fastcall **)(__int64, __int64 *, __m128i))(*(_QWORD *)v9 + 16LL);
          v32 = (__int64 *)v11;
          *(_DWORD *)(v11 + 104) = v12 + 2;
          if ( v22 == sub_2C22D0 )
          {
            v23 = *(_QWORD *)(v9 + 8);
            v30 = -1;
            if ( v23 != -1 )
            {
              v33 = (__int64 *)v11;
              *(_DWORD *)(v11 + 104) = v12 + 3;
              goto LABEL_36;
            }
            goto LABEL_38;
          }
          goto LABEL_39;
        }
      }
      else
      {
        v26 = *(_QWORD *)(a1 + 40) + (v8 << 6);
        v21 = v10(v9);
        v9 = v26;
        if ( !v21 )
          goto LABEL_13;
        v11 = *(_QWORD *)(a1 + 72);
        v31 = (__int64 *)v11;
        if ( v11 )
          goto LABEL_9;
      }
      v13 = *(_DWORD *)(v9 + 56);
      if ( v13 != -2 )
        goto LABEL_10;
      v22 = *(__int64 (__fastcall **)(__int64, __int64 *, __m128i))(*(_QWORD *)v9 + 16LL);
      v32 = nullptr;
      if ( v22 == sub_2C22D0 )
      {
        v23 = *(_QWORD *)(v9 + 8);
        v30 = -1;
        if ( v23 != -1 )
        {
          v33 = nullptr;
LABEL_36:
          v27 = v9;
          sub_2C07C0(v11, v23, nullptr, &v30, a3);
          sub_140140(&v33);
          v24 = v30;
          v9 = v27;
LABEL_37:
          *(_DWORD *)(v9 + 56) = v24;
          v28 = v9;
          sub_140140(&v32);
          v13 = *(_DWORD *)(v28 + 56);
          goto LABEL_10;
        }
LABEL_38:
        v24 = -1;
        goto LABEL_37;
      }
LABEL_39:
      v29 = v9;
      v24 = ((__int64 (__fastcall *)(__int64, __int64 **))v22)(v9, &v32);
      v9 = v29;
      goto LABEL_37;
    }
  }
  return -1;
}

