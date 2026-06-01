__int64 __fastcall hexrays_deregister_all_python_clearable_references(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        int a5,
        int a6)
{
  int v6; // r8d
  int v7; // r9d
  __int64 result; // rax
  __int64 v9; // rbx
  __int64 v10; // rdi
  __int64 **v11; // r15
  __int64 *v12; // r15
  void (__fastcall *v13)(__int64, __int64 *, _QWORD); // rcx
  __int64 (__fastcall *v14)(__int64, __int64 *); // rax
  __int64 *v15; // r15
  __int64 (__fastcall *v16)(__int64, __int64 *); // rax
  __int64 *v17; // r15
  __int64 *v18; // r15
  __int64 *v19; // r15
  __int64 (__fastcall *v20)(__int64, __int64 *); // rax
  __int64 *v21; // r15
  __int64 (__fastcall *v22)(__int64, __int64 *); // rax
  __int64 *v23; // r15
  __int64 (__fastcall *v24)(__int64, __int64 *); // rax
  __int64 *v25; // r12
  __int64 *v26; // r13
  __int64 *v27; // r14
  void (__fastcall *v28)(__int64, __int64 *); // rax
  void (__fastcall *v29)(__int64, __int64 *); // rax
  __int64 *v30; // r15
  __int64 (__fastcall *v31)(__int64, __int64 *); // rax
  __int64 *v32; // r15
  __int64 (__fastcall *v33)(__int64, __int64 *); // rax
  __int64 *v34; // r12
  __int64 v35; // rdx
  _QWORD *v37; // r15
  void (__fastcall *v38)(__int64, _QWORD *); // rax
  __int64 v39; // rdi
  __int64 v40; // rsi
  __int64 v41; // r14
  __int64 i; // r13
  _QWORD *v43; // rax
  void (__fastcall *idapython_hexdsp)(__int64, _QWORD *); // rax
  void (__fastcall *v45)(__int64, _QWORD *); // rax
  __int64 (__fastcall *v46)(__int64, _QWORD *); // rax
  char v47; // [rsp+0h] [rbp-48h]
  char v48; // [rsp+0h] [rbp-48h]
  __int64 v49; // [rsp+8h] [rbp-40h]

  debug_hexrays_ctree(1, (int)"hexrays_deregister_all_python_clearable_references()\n", a3, a4, a5, a6, v47);
  result = xmmword_24638;
  v49 = xmmword_24638;
  if ( (_QWORD)xmmword_24638 )
  {
    v9 = 0;
    while ( 2 )
    {
      v10 = 1;
      v11 = (__int64 **)(qword_24630 + 16 * v9);
      debug_hexrays_ctree(1, (int)"cleaning up %p (%d)\n", (int)*v11, *((_DWORD *)v11 + 2), v6, v7, v48);
      result = *((unsigned int *)v11 + 2);
      switch ( *((_DWORD *)v11 + 2) )
      {
        case 1:
          v34 = *v11;
          v35 = **v11;
          if ( v35 )
          {
            if ( (*(_DWORD *)(v35 + 104))-- == 1 )
            {
              v37 = (_QWORD *)*v34;
              if ( *v34 )
              {
                v38 = (void (__fastcall *)(__int64, _QWORD *))((__int64 (*)(void))get_idapython_hexdsp)();
                v38(564, v37);
                v39 = v37[20];
                if ( v39 )
                {
                  v37[21] = 0;
                  qfree();
                }
                v40 = v37[16];
                if ( v40 )
                {
                  v41 = v37[17];
                  if ( v41 )
                  {
                    for ( i = 0; i != v41; ++i )
                    {
                      v43 = (_QWORD *)(v40 + 32 * i);
                      if ( *v43 )
                      {
                        v43[1] = 0;
                        qfree();
                        v40 = v37[16];
                      }
                    }
                  }
                  v37[17] = 0;
                  v39 = v40;
                  qfree();
                }
                idapython_hexdsp = (void (__fastcall *)(__int64, _QWORD *))get_idapython_hexdsp(v39);
                idapython_hexdsp(493, v37 + 2);
                v45 = (void (__fastcall *)(__int64, _QWORD *))get_idapython_hexdsp(493);
                v45(444, v37 + 2);
                v46 = (__int64 (__fastcall *)(__int64, _QWORD *))get_idapython_hexdsp(444);
                result = v46(130, v37);
              }
            }
          }
          *v34 = 0;
          goto LABEL_7;
        case 2:
          v32 = *v11;
          v33 = (__int64 (__fastcall *)(__int64, __int64 *))get_idapython_hexdsp(1);
          result = v33(493, v32);
          goto LABEL_7;
        case 3:
          v30 = *v11;
          v31 = (__int64 (__fastcall *)(__int64, __int64 *))get_idapython_hexdsp(1);
          result = v31(467, v30);
          goto LABEL_7;
        case 4:
          v25 = *v11;
          v26 = (__int64 *)**v11;
          if ( *v11 != v26 )
          {
            do
            {
              v27 = v26;
              v26 = (__int64 *)*v26;
              *(_QWORD *)v27[1] = v26;
              v26[1] = v27[1];
              v28 = (void (__fastcall *)(__int64, __int64 *))get_idapython_hexdsp(v10);
              v28(493, v27 + 2);
              v29 = (void (__fastcall *)(__int64, __int64 *))get_idapython_hexdsp(493);
              v29(444, v27 + 2);
              v10 = (__int64)v27;
              result = qfree();
              --v25[2];
            }
            while ( v25 != v26 );
          }
          goto LABEL_7;
        case 5:
          v23 = *v11;
          v24 = (__int64 (__fastcall *)(__int64, __int64 *))get_idapython_hexdsp(1);
          result = v24(391, v23);
          goto LABEL_7;
        case 6:
          v21 = *v11;
          v22 = (__int64 (__fastcall *)(__int64, __int64 *))get_idapython_hexdsp(1);
          result = v22(276, v21);
          goto LABEL_7;
        case 7:
          v19 = *v11;
          v20 = (__int64 (__fastcall *)(__int64, __int64 *))get_idapython_hexdsp(1);
          result = v20(343, v19);
          goto LABEL_7;
        case 8:
          v18 = *v11;
          result = get_idapython_hexdsp(1);
          if ( result )
            result = ((__int64 (__fastcall *)(__int64, __int64 *))result)(256, v18);
          goto LABEL_7;
        case 9:
          v17 = *v11;
          result = get_idapython_hexdsp(1);
          if ( result )
            result = ((__int64 (__fastcall *)(__int64, __int64 *))result)(258, v17);
          goto LABEL_7;
        case 0xA:
          v15 = *v11;
          v16 = (__int64 (__fastcall *)(__int64, __int64 *))get_idapython_hexdsp(1);
          result = v16(131, v15);
          goto LABEL_7;
        case 0xB:
          v12 = *v11;
          v13 = (void (__fastcall *)(__int64, __int64 *, _QWORD))get_idapython_hexdsp(1);
          if ( v13 )
          {
            v10 = 199;
            v13(199, v12, 0);
          }
          v14 = (__int64 (__fastcall *)(__int64, __int64 *))get_idapython_hexdsp(v10);
          result = v14(200, v12);
LABEL_7:
          if ( v49 == ++v9 )
            return result;
          continue;
        default:
          if ( under_debugger )
            BUG();
          interr();
          return get_plugin_instance(30499);
      }
    }
  }
  return result;
}

