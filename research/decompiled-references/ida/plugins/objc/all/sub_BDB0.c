__int64 __fastcall sub_BDB0(__int64 a1, __int64 *a2, __int64 a3, int a4, int a5, int a6)
{
  __int64 v8; // rdx
  __int64 v9; // rax
  int v10; // eax
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  __int64 v15; // rax
  int v16; // edx
  int v17; // ecx
  int v18; // r8d
  int v19; // r9d
  __int64 v20; // rax
  const char *v21; // rdx
  int v22; // edx
  int v23; // ecx
  __int64 v24; // rbp
  int v25; // r8d
  int v26; // r9d
  int v27; // edx
  int v28; // ecx
  int v29; // r8d
  int v30; // r9d
  const char *v31; // rdi
  const char *v32; // rdi
  __int64 v33; // [rsp+8h] [rbp-50h] BYREF
  __int64 v34; // [rsp+10h] [rbp-48h] BYREF
  __int64 v35; // [rsp+18h] [rbp-40h] BYREF
  __int64 v36; // [rsp+20h] [rbp-38h] BYREF
  __int128 v37; // [rsp+28h] [rbp-30h]
  unsigned __int64 v38; // [rsp+38h] [rbp-20h]

  v38 = __readfsqword(0x28u);
  if ( *(_BYTE *)(a1 + 32) != 1 || !a2 || a2[1] != *(_QWORD *)(a1 + 24) )
    return v38 - __readfsqword(0x28u);
  v8 = *(_QWORD *)(a1 + 16);
  if ( *(_BYTE *)(v8 + 2216) )
  {
    a2 = *(__int64 **)(a1 + 24);
    sub_EC40((unsigned int)"debugger stopped at objc_msgSend (%a)\n", (_DWORD)a2, v8, a4, a5, a6);
    v8 = *(_QWORD *)(a1 + 16);
  }
  *(_BYTE *)(a1 + 32) = 0;
  if ( *(_QWORD *)(v8 + 1808) )
  {
    v33 = 0;
    v9 = *(_QWORD *)(v8 + 8);
    v34 = 0;
    v10 = *(_DWORD *)(v9 + 4);
    if ( v10 )
    {
      if ( v10 == 13 )
      {
        v31 = "R0";
        a2 = &v33;
        if ( (unsigned __int8)getinf_flag() )
          v31 = "X0";
        if ( (unsigned __int8)sub_A8F0((__int64)v31, &v33) )
        {
          v32 = "R1";
          a2 = &v34;
          if ( (unsigned __int8)getinf_flag() )
            v32 = "X1";
          if ( (unsigned __int8)sub_A8F0((__int64)v32, &v34) )
          {
LABEL_15:
            v36 = 0;
            v37 = 0;
            if ( (unsigned __int8)sub_158D0(&v36, v34) )
            {
              v15 = *(_QWORD *)(a1 + 16);
              v35 = 0;
              if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64 *, __int64))(**(_QWORD **)(v15 + 1808) + 400LL))(
                     *(_QWORD *)(v15 + 1808),
                     &v35,
                     v33) )
              {
                v20 = *(_QWORD *)(a1 + 16);
                if ( *(_BYTE *)(v20 + 2216) )
                {
                  v21 = src;
                  if ( (_QWORD)v37 )
                    LODWORD(v21) = v36;
                  sub_EC40((unsigned int)"runto: cls=%a, sel=%s\n", v35, (_DWORD)v21, v17, v18, v19);
                  v20 = *(_QWORD *)(a1 + 16);
                }
                v24 = sub_16810(*(_QWORD *)(v20 + 1808), v35, &v36);
                if ( v24 != -1 )
                {
                  if ( *(_BYTE *)(*(_QWORD *)(a1 + 16) + 2216LL) )
                    sub_EC40((unsigned int)"detected message receiver: %a\n", v24, v22, v23, v25, v26);
                  if ( !(unsigned __int8)callui(1022) )
                    sub_EC40((unsigned int)"request_run_to(%a) failed!\n", v24, v27, v28, v29, v30);
                  if ( !v36 )
                    return v38 - __readfsqword(0x28u);
LABEL_27:
                  *(_QWORD *)&v37 = 0;
                  qfree();
                  return v38 - __readfsqword(0x28u);
                }
                sub_EE20("failed to determine the target method address");
              }
              else
              {
                sub_EC40(
                  (unsigned int)"Error: Failed to determine the class of the object at %a\n",
                  v33,
                  v16,
                  v17,
                  v18,
                  v19);
              }
            }
            else
            {
              sub_EC40((unsigned int)"Error: failed to read selector string at %a\n", v34, v11, v12, v13, v14);
            }
            if ( !v36 )
              return v38 - __readfsqword(0x28u);
            goto LABEL_27;
          }
        }
      }
    }
    else if ( (unsigned __int8)getinf_flag() )
    {
      a2 = &v33;
      if ( (unsigned __int8)sub_A8F0((__int64)"RDI", &v33) )
      {
        a2 = &v34;
        if ( (unsigned __int8)sub_A8F0((__int64)"RSI", &v34) )
          goto LABEL_15;
      }
    }
    else
    {
      a2 = &v36;
      if ( (unsigned __int8)callui(1090) )
      {
        LODWORD(a2) = v36 + 4;
        if ( callui(1110) == 4 )
        {
          LODWORD(a2) = v36 + 8;
          if ( callui(1110) == 4 )
            goto LABEL_15;
        }
      }
    }
    sub_EC40((unsigned int)"Error: failed to read arguments to objc_msgSend\n", (_DWORD)a2, v8, a4, a5, a6);
    return v38 - __readfsqword(0x28u);
  }
  return sub_EE20("runtime version was not set correctly");
}
