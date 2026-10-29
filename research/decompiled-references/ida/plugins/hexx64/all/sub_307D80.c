unsigned __int64 __fastcall sub_307D80(__int64 a1, __int64 *a2, __m128i a3, double a4, __m128i a5, double a6)
{
  __int64 v7; // r12
  __int64 v8; // rbp
  unsigned __int64 v9; // rbx
  __int64 v10; // r8
  bool (__fastcall *v11)(__int64); // rax
  __int64 v12; // rdi
  int v13; // eax
  int v14; // r15d
  __int64 *v15; // rax
  __int64 (__fastcall *v16)(_QWORD *, unsigned __int64); // rax
  __int64 *func; // rax
  __int64 v19; // rax
  __int64 *v20; // rax
  __m128i *v21; // rdi
  bool v22; // al
  __int64 (__fastcall *v23)(__int64, __int64 *, __m128i); // rdx
  __int64 v24; // rsi
  int v25; // eax
  __int64 v27; // [rsp+8h] [rbp-90h]
  __int64 v28; // [rsp+8h] [rbp-90h]
  __int64 v29; // [rsp+8h] [rbp-90h]
  __int64 v30; // [rsp+8h] [rbp-90h]
  int v31; // [rsp+1Ch] [rbp-7Ch] BYREF
  __int64 *v32; // [rsp+20h] [rbp-78h] BYREF
  __int64 *v33; // [rsp+28h] [rbp-70h] BYREF
  __int64 *v34; // [rsp+30h] [rbp-68h] BYREF
  __int64 v35; // [rsp+38h] [rbp-60h]
  __int128 v36; // [rsp+40h] [rbp-58h]
  unsigned __int64 v37; // [rsp+58h] [rbp-40h]

  v37 = __readfsqword(0x28u);
  if ( sub_307C40(a1, *(double *)a3.m128i_i64, a4, a5, a6) )
  {
    v7 = *(_QWORD *)(a1 + 48);
    if ( v7 )
    {
      v8 = 0;
      v9 = 0;
      while ( 1 )
      {
        v16 = *(__int64 (__fastcall **)(_QWORD *, unsigned __int64))(*(_QWORD *)a1 + 144LL);
        if ( v16 != sub_308140 )
        {
          v15 = (__int64 *)v16((_QWORD *)a1, v9);
LABEL_11:
          if ( v15 != (__int64 *)-1LL && v15 == a2 )
            return v9;
          goto LABEL_13;
        }
        switch_dbctx();
        if ( *(_QWORD *)(a1 + 72) )
          break;
        func = (__int64 *)get_func();
        if ( func )
        {
          v34 = func;
          v19 = *(_QWORD *)(a1 + 64);
          a3 = 0;
          v36 = 0;
          v35 = 0;
          sub_14CDC0((__int64 *)&v33, *(_QWORD *)(v19 + 112), &v34, nullptr, 1, 0.0, a4, a5, a6);
          sub_140140((__int64 **)(a1 + 72));
          v20 = v33;
          *(_QWORD *)(a1 + 72) = v33;
          if ( v20 )
            ++*((_DWORD *)v20 + 26);
          sub_140140(&v33);
          if ( v35 )
          {
            *(_QWORD *)&v36 = 0;
            qfree(v35);
          }
          v21 = *(__m128i **)(a1 + 72);
          if ( !v21 )
            goto LABEL_13;
          sub_2581E0(v21);
        }
        if ( *(_QWORD *)(a1 + 72) )
          break;
LABEL_13:
        ++v9;
        v8 += 56;
        if ( v7 == v9 )
          return -1;
      }
      if ( v9 >= *(_QWORD *)(a1 + 48) )
        sub_2ADE00(*(double *)a3.m128i_i64);
      v10 = v8 + *(_QWORD *)(a1 + 40);
      v11 = **(bool (__fastcall ***)(__int64))v10;
      if ( v11 == sub_2AD170 )
      {
        if ( *(_QWORD *)(v10 + 8) == *(_QWORD *)(v10 + 40) )
          goto LABEL_13;
        v12 = *(_QWORD *)(a1 + 72);
        v32 = (__int64 *)v12;
        if ( v12 )
        {
LABEL_9:
          v13 = *(_DWORD *)(v12 + 104);
          *(_DWORD *)(v12 + 104) = v13 + 1;
          v14 = *(_DWORD *)(v10 + 48);
          if ( v14 != -2 )
          {
LABEL_10:
            sub_140140(&v32);
            v15 = (__int64 *)v14;
            if ( v14 == -1 )
              goto LABEL_13;
            goto LABEL_11;
          }
          v23 = *(__int64 (__fastcall **)(__int64, __int64 *, __m128i))(*(_QWORD *)v10 + 16LL);
          v33 = (__int64 *)v12;
          *(_DWORD *)(v12 + 104) = v13 + 2;
          if ( v23 == sub_2C2030 )
          {
            v24 = *(_QWORD *)(v10 + 8);
            v31 = -1;
            if ( v24 != -1 )
            {
              v34 = (__int64 *)v12;
              *(_DWORD *)(v12 + 104) = v13 + 3;
              goto LABEL_36;
            }
            goto LABEL_38;
          }
          goto LABEL_39;
        }
      }
      else
      {
        v27 = v8 + *(_QWORD *)(a1 + 40);
        v22 = v11(v10);
        v10 = v27;
        if ( !v22 )
          goto LABEL_13;
        v12 = *(_QWORD *)(a1 + 72);
        v32 = (__int64 *)v12;
        if ( v12 )
          goto LABEL_9;
      }
      v14 = *(_DWORD *)(v10 + 48);
      if ( v14 != -2 )
        goto LABEL_10;
      v23 = *(__int64 (__fastcall **)(__int64, __int64 *, __m128i))(*(_QWORD *)v10 + 16LL);
      v33 = nullptr;
      if ( v23 == sub_2C2030 )
      {
        v24 = *(_QWORD *)(v10 + 8);
        v31 = -1;
        if ( v24 != -1 )
        {
          v34 = nullptr;
LABEL_36:
          v28 = v10;
          sub_2C07C0(v12, v24, nullptr, &v31, a3);
          sub_140140(&v34);
          v25 = v31;
          v10 = v28;
LABEL_37:
          *(_DWORD *)(v10 + 48) = v25;
          v29 = v10;
          sub_140140(&v33);
          v14 = *(_DWORD *)(v29 + 48);
          goto LABEL_10;
        }
LABEL_38:
        v25 = -1;
        goto LABEL_37;
      }
LABEL_39:
      v30 = v10;
      v25 = ((__int64 (__fastcall *)(__int64, __int64 **))v23)(v10, &v33);
      v10 = v30;
      goto LABEL_37;
    }
  }
  return -1;
}

