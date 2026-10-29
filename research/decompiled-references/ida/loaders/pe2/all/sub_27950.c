__int64 __fastcall sub_27950(
        __int64 a1,
        int a2,
        __int64 *a3,
        _DWORD *a4,
        char *a5,
        int a6,
        _DWORD *a7,
        __int64 a8,
        __int64 *a9,
        _DWORD *a10,
        _DWORD *a11)
{
  __int64 v14; // rdi
  unsigned int v15; // edx
  __int64 v17; // rax
  __int64 v18; // rdi
  char *v19; // rcx
  unsigned int v20; // r12d
  char *v21; // r13
  int v22; // r14d
  __int64 v23; // rax
  __int64 v24; // rdi
  char *v25; // rcx
  __int64 *v26; // [rsp+0h] [rbp-A8h]
  unsigned int v28; // [rsp+8h] [rbp-A0h]
  char *v30; // [rsp+20h] [rbp-88h] BYREF
  __int128 v31; // [rsp+28h] [rbp-80h]
  _WORD v32[8]; // [rsp+40h] [rbp-68h] BYREF
  int v33; // [rsp+50h] [rbp-58h]
  unsigned int v34; // [rsp+54h] [rbp-54h]
  unsigned int v35; // [rsp+58h] [rbp-50h]
  unsigned int v36; // [rsp+5Ch] [rbp-4Ch]
  unsigned int v37; // [rsp+60h] [rbp-48h]
  unsigned __int64 v38; // [rsp+68h] [rbp-40h]

  v38 = __readfsqword(0x28u);
  if ( a3 )
    *a3 = 0;
  if ( a4 )
    *a4 = 0;
  if ( a5 )
    *(_WORD *)a5 = 0;
  if ( a7 )
    *a7 = 0;
  if ( a8 )
  {
    *(_OWORD *)(a8 + 16) = 0;
    *(_OWORD *)a8 = 0;
    *(_OWORD *)(a8 + 28) = 0;
  }
  if ( a9 )
    *a9 = 0;
  if ( a10 )
    *a10 = 0;
  if ( a11 )
    *a11 = 0;
  v14 = *(_QWORD *)(a1 + 8);
  v15 = 1;
  v26 = a3;
  if ( *(_BYTE *)(v14 + 1472) )
  {
    if ( !(unsigned __int8)sub_23850(v14, v14 + 1472, (a2 & 0xFFFFFFu) - 1, (__int64)v32) )
      return (unsigned int)-2147024883;
    if ( a11 )
      *a11 = v33;
    if ( (unsigned __int8)sub_24380(*(_QWORD *)(a1 + 8), v34, v26, a4, nullptr) )
    {
      v31 = 0;
      v28 = v35;
      v30 = nullptr;
      v17 = qvector_reserve();
      v18 = *(_QWORD *)(a1 + 8);
      v30 = (char *)v17;
      sub_24180(v18, v28, (__int64 *)&v30);
      v19 = (char *)s1;
      if ( (_QWORD)v31 )
        v19 = v30;
      sub_264E0(a5, a6, a7, v19);
      if ( v30 )
      {
        *(_QWORD *)&v31 = 0;
        qfree();
      }
      if ( !v37 || v37 == 0xFFFF )
      {
        if ( a9 )
          *a9 = 0;
        if ( a10 )
          *a10 = 0;
        goto LABEL_33;
      }
      if ( (unsigned __int8)sub_24380(*(_QWORD *)(a1 + 8), v37, a9, a10, nullptr) )
      {
LABEL_33:
        if ( a8 )
        {
          v20 = v36;
          *(_QWORD *)a8 = v32[0] | ((v32[2] | ((v32[4] | ((unsigned __int64)v32[6] << 16)) << 16)) << 16);
          if ( v20 )
          {
            v21 = *(char **)(a8 + 8);
            if ( v21 )
            {
              v22 = *(_DWORD *)(a8 + 16);
              v31 = 0;
              v30 = nullptr;
              v23 = qvector_reserve();
              v24 = *(_QWORD *)(a1 + 8);
              v30 = (char *)v23;
              sub_24180(v24, v20, (__int64 *)&v30);
              v25 = (char *)s1;
              if ( (_QWORD)v31 )
                v25 = v30;
              sub_264E0(v21, v22, nullptr, v25);
              if ( v30 )
              {
                *(_QWORD *)&v31 = 0;
                qfree();
              }
            }
          }
          *(_DWORD *)(a8 + 28) = 0;
          *(_DWORD *)(a8 + 40) = 0;
        }
        return 0;
      }
    }
    return (unsigned int)-2147467259;
  }
  return v15;
}

