__int64 __fastcall sub_3FE660(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, double a5)
{
  __int64 v6; // rbx
  unsigned int v8; // r15d
  unsigned int v10; // eax
  __int64 v11; // r9
  _DWORD *v12; // rdi
  int v13; // r14d
  int v14; // ebp
  int *v15; // r12
  int v16; // ebx
  int *v17; // r15
  __int64 (__fastcall *v18)(__int64, int); // rax
  __int64 v19; // rsi
  int v20; // eax
  int tinfo_size; // eax
  __int64 v22; // rdi
  __int64 v23; // rsi
  int v24; // r12d
  __int64 (__fastcall *v25)(__int64, int); // rax
  int v26; // eax
  __int64 v28; // [rsp+8h] [rbp-90h]
  unsigned int dtype_size; // [rsp+10h] [rbp-88h]
  __int64 v30; // [rsp+18h] [rbp-80h]
  unsigned int v32; // [rsp+24h] [rbp-74h]
  __int64 v33; // [rsp+38h] [rbp-60h] BYREF
  int v34[6]; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int64 v35; // [rsp+58h] [rbp-40h]

  v6 = a1;
  v35 = __readfsqword(0x28u);
  v8 = sub_3EE030(a1, a3);
  if ( (_BYTE)v8 )
  {
    sub_3EE110(a1, a3, a5);
    dtype_size = get_dtype_size();
    v10 = sub_3EE210(a1, a3, a5);
    v11 = *(_QWORD *)(a3 + 8);
    v12 = *(_DWORD **)(a1 + 832);
    if ( (_DWORD)v11 == 1 )
    {
      sub_3FE370(&v33, *(_QWORD *)(v6 + 832), dtype_size, v10, a4, a5);
      copy_tinfo_t();
      clear_tinfo_t();
      tinfo_size = get_tinfo_size();
      v22 = *(_QWORD *)(v6 + 832);
      v23 = *(unsigned __int16 *)(a3 + 6);
      v24 = tinfo_size;
      v25 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)v22 + 168LL);
      if ( v25 == sub_3EA010 )
        v26 = sub_3EA010(v22, v23);
      else
        v26 = v25(v22, v23);
      *(_BYTE *)a2 = 1;
      *(_DWORD *)(a2 + 8) = v26;
      *(_DWORD *)(a2 + 4) = v24;
    }
    else
    {
      if ( v12[20] == 8 )
      {
        v13 = 163;
        v14 = 1;
      }
      else
      {
        v13 = 61;
        v14 = *(char *)(a3 + 33) + 1;
      }
      if ( (unsigned __int64)(int)v11 > 4 )
      {
        if ( !under_debugger )
          sub_3835A0(0xC904u, a5);
        BUG();
      }
      if ( (_DWORD)v11 )
      {
        v32 = v10;
        v30 = *(_QWORD *)(a3 + 8);
        v15 = &v34[(unsigned int)(v11 - 1) + 1];
        v28 = v6;
        v16 = *(unsigned __int16 *)(a3 + 6) - v13;
        v17 = v34;
        do
        {
          v18 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)v12 + 168LL);
          v19 = (unsigned int)(v13 + v16 % 32);
          if ( v18 == sub_3EA010 )
          {
            v20 = sub_3EA010((__int64)v12, v19);
          }
          else
          {
            v20 = v18((__int64)v12, v19);
            v12 = *(_DWORD **)(v28 + 832);
          }
          *v17++ = v20;
          v16 += v14;
        }
        while ( v15 != v17 );
        LODWORD(v11) = v30;
        v10 = v32;
        v6 = v28;
      }
      return (unsigned int)sub_3FE0C0(a2, (__int64)v12, *(_QWORD *)(v6 + 8), a4, dtype_size, v10, v11, v34);
    }
  }
  return v8;
}

