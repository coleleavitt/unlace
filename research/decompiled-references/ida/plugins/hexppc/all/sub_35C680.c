unsigned __int64 __fastcall sub_35C680(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  int func_qty; // eax
  __int64 v5; // r14
  __int64 v6; // rax
  __int64 v7; // r15
  __int64 v8; // r13
  char *v9; // rax
  int v10; // eax
  __int64 (__fastcall *v11)(__int64); // rax
  int v12; // r14d
  __int64 v13; // r13
  int v14; // r12d
  unsigned __int64 *func; // rax
  int v16; // eax
  int v17; // r15d
  __int64 *v18; // rdi
  __int64 v19; // rdx
  _DWORD *v20; // rcx
  _DWORD *v21; // rax
  __int64 *v23; // rdi
  __int64 v24; // rax
  __int64 v25; // rsi
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // [rsp+8h] [rbp-390h]
  char v29; // [rsp+A8h] [rbp-2F0h] BYREF
  char v30; // [rsp+1E8h] [rbp-1B0h] BYREF
  unsigned __int64 v31; // [rsp+358h] [rbp-40h]

  v2 = 0;
  v31 = __readfsqword(0x28u);
  func_qty = get_func_qty();
  v5 = (unsigned int)(func_qty - 1);
  if ( func_qty > 0 )
  {
    while ( 1 )
    {
      v6 = getn_func();
      v7 = v6;
      if ( v6 )
      {
        v8 = *(_QWORD *)(v6 + 16);
        if ( ((v8 & 4) == 0 || (*(_BYTE *)(a2 + 607) & 1) != 0)
          && (v8 & 0x1A0000) == 0
          && !(unsigned __int8)sub_370C10(v6) )
        {
          v28 = *(_QWORD *)v7;
          if ( !(unsigned __int8)is_spec_ea()
            && getseg()
            && (get_segm_name() <= 0
             || strcmp(s1, "__stub_helper") && strcmp(s1, "__symbolstub1") && strcmp(s1, ".MIPS.stubs")) )
          {
            v9 = &v29;
            do
            {
              *(_WORD *)v9 = 0;
              v9 += 40;
              *((_WORD *)v9 - 19) = 0;
              *((_WORD *)v9 - 18) = 0;
              *((_DWORD *)v9 - 2) = 0;
              *((_WORD *)v9 - 17) = 0;
              *((_OWORD *)v9 - 2) = 0;
              *((_QWORD *)v9 - 2) = 0;
            }
            while ( &v30 != v9 );
            if ( (unsigned int)decode_insn()
              && (v28 != *(_QWORD *)(v7 + 8) || *(_DWORD *)(v7 + 128))
              && !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64, double))(**(_QWORD **)(a2 + 112) + 144LL))(
                    *(_QWORD *)(a2 + 112),
                    v28,
                    0.0)
              && sub_CC530() != 1 )
            {
              v10 = *(_DWORD *)(a2 + 1336);
              if ( (v10 & 0x8000) != 0 )
              {
                get_func_ranges();
                v10 = *(_DWORD *)(a2 + 1336);
              }
              if ( (v10 & 0x100000) == 0 || find_syseh() != -1 )
                sub_35C580((unsigned int *)a1, (_QWORD *)v7);
            }
          }
        }
      }
      if ( v5 == v2 )
        break;
      ++v2;
    }
  }
  v11 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL);
  if ( v11 == sub_61600 )
    v12 = *(_DWORD *)(a1 + 56);
  else
    v12 = v11(a1);
  v13 = 0;
  v14 = 0;
  if ( v12 > 0 )
  {
    do
    {
      if ( (unsigned __int8)xrefblk_t_first_to() )
      {
        do
        {
          func = (unsigned __int64 *)get_func();
          if ( func )
          {
            v16 = sub_35C470(a1, *func);
            v17 = v16;
            if ( v16 != -1 && v16 != v14 )
            {
              v18 = (__int64 *)(*(_QWORD *)(a1 + 48) + 24LL * v16);
              v19 = v18[1];
              v20 = (_DWORD *)(*v18 + 4 * v19);
              if ( (_DWORD *)*v18 == v20 )
                goto LABEL_41;
              v21 = (_DWORD *)*v18;
              while ( *v21 != v14 )
              {
                if ( v20 == ++v21 )
                  goto LABEL_41;
              }
              if ( v21 == v20 )
              {
LABEL_41:
                if ( v18[2] < (unsigned __int64)(v19 + 1) )
                {
                  v26 = qvector_reserve();
                  v27 = v18[1];
                  *v18 = v26;
                  v20 = (_DWORD *)(v26 + 4 * v27);
                }
                *v20 = v14;
                ++v18[1];
                v23 = (__int64 *)(v13 + *(_QWORD *)(a1 + 72));
                v24 = v23[1];
                v25 = *v23;
                if ( v23[2] < (unsigned __int64)(v24 + 1) )
                {
                  v25 = qvector_reserve();
                  *v23 = v25;
                  v24 = v23[1];
                }
                *(_DWORD *)(v25 + 4 * v24) = v17;
                ++v23[1];
              }
            }
          }
        }
        while ( (unsigned __int8)xrefblk_t_next_to() );
      }
      ++v14;
      v13 += 24;
    }
    while ( v12 != v14 );
  }
  return v31 - __readfsqword(0x28u);
}

