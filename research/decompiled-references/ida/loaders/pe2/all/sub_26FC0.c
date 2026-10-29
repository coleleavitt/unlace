__int64 __fastcall sub_26FC0(
        __int64 a1,
        unsigned int a2,
        int *a3,
        char *a4,
        int a5,
        _DWORD *a6,
        _DWORD *a7,
        _DWORD *a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        unsigned int a13,
        unsigned int *a14)
{
  __int64 v16; // rdi
  __int64 result; // rax
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  int v22; // edx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  unsigned int v27; // ebx
  unsigned int v28; // ebx
  __int64 v29; // rax
  __int64 v30; // rdi
  char *v31; // rcx
  unsigned __int8 *v32; // rax
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rdx
  __int64 v37; // rdi
  int v38; // ebx
  __int64 v39; // rsi
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 *v42; // rcx
  int v43; // eax
  int v44; // r12d
  int v45; // r13d
  int v46; // r14d
  unsigned int v47; // ebp
  __int64 v48; // rdx
  unsigned int v52; // [rsp+4Ch] [rbp-12Ch] BYREF
  __int64 v53; // [rsp+50h] [rbp-128h] BYREF
  int v54; // [rsp+58h] [rbp-120h]
  __int64 v55; // [rsp+60h] [rbp-118h] BYREF
  __int64 *v56; // [rsp+68h] [rbp-110h]
  int v57; // [rsp+70h] [rbp-108h]
  char v58; // [rsp+74h] [rbp-104h]
  char *v59; // [rsp+80h] [rbp-F8h] BYREF
  __int128 v60; // [rsp+88h] [rbp-F0h]
  int v61; // [rsp+98h] [rbp-E0h]
  int v62; // [rsp+9Ch] [rbp-DCh]
  int v63; // [rsp+A0h] [rbp-D8h]
  int v64; // [rsp+A4h] [rbp-D4h]
  _DWORD v65[12]; // [rsp+B0h] [rbp-C8h] BYREF
  int v66[12]; // [rsp+E0h] [rbp-98h] BYREF
  int v67; // [rsp+110h] [rbp-68h] BYREF
  int v68; // [rsp+114h] [rbp-64h]
  unsigned __int64 v69; // [rsp+138h] [rbp-40h]

  v69 = __readfsqword(0x28u);
  if ( a3 )
    *a3 = 0;
  if ( a4 )
    *(_WORD *)a4 = 0;
  if ( a6 )
    *a6 = 0;
  if ( a7 )
    *a7 = 0;
  if ( a8 )
    *a8 = 0;
  if ( a9 )
    *(_DWORD *)a9 = 0;
  if ( a10 )
    *(_DWORD *)a10 = 0;
  if ( a11 )
    *(_DWORD *)a11 = 0;
  if ( a14 )
    *a14 = 0;
  v16 = *(_QWORD *)(a1 + 8);
  result = 1;
  if ( *(_BYTE *)(v16 + 872) )
  {
    if ( (unsigned __int8)sub_23850(v16, v16 + 872, (a2 & 0xFFFFFF) - 1, (__int64)v65) )
    {
      if ( a3 )
      {
        v21 = *(_QWORD *)(a1 + 8);
        v61 = a2 & 0xFFFFFF;
        *(_QWORD *)&v60 = &v53;
        v22 = *(_DWORD *)(v21 + 796);
        v53 = v21;
        v63 = v22;
        v54 = 18;
        v59 = (char *)v21;
        DWORD2(v60) = 1;
        BYTE12(v60) = 1;
        v62 = 20;
        v64 = 0;
        v55 = v21;
        v56 = (__int64 *)&v59;
        v57 = 257;
        v58 = 0;
        if ( !(unsigned __int8)sub_25E00((__int64)&v59, (int *)&v52, (__int64)&v67, v18, v19, v20)
          || (v27 = v52, sub_25ED0((__int64)&v55, v52, v66, v24, v25, v26), !v27) )
        {
          sub_DB80((__int64)"Couldn't find event map event token 0x%x.", a2, v23, v24, v25, v26, (char)a14);
        }
        *a3 = v66[0] | 0x2000000;
      }
      v28 = v65[1];
      v59 = nullptr;
      v60 = 0;
      v29 = qvector_reserve();
      v30 = *(_QWORD *)(a1 + 8);
      v59 = (char *)v29;
      sub_24180(v30, v28, (__int64 *)&v59);
      v31 = (char *)s1;
      if ( (_QWORD)v60 )
        v31 = v59;
      sub_264E0(a4, a5, a6, v31);
      if ( v59 )
      {
        *(_QWORD *)&v60 = 0;
        qfree();
      }
      if ( a7 )
        *a7 = v65[0];
      if ( a8 )
        *a8 = sub_23D20(*(_QWORD *)(a1 + 8), 0x6Bu, v65[2]);
      if ( a9 | a10 | a11 || a13 )
      {
        v32 = (unsigned __int8 *)sub_2A190(101);
        v36 = *v32;
        v37 = *((_QWORD *)v32 + 1);
        v38 = (2 * a2) & 0x1FFFFFE;
        v39 = HIBYTE(a2);
        if ( !(_BYTE)v36 )
LABEL_62:
          sub_DB80((__int64)"Impossible to get coded table for table 0x%x", v39, v36, v33, v34, v35, (char)a14);
        v33 = (unsigned int)v39;
        v40 = 0;
        while ( (_BYTE)v39 != *(_BYTE *)(v37 + v40) )
        {
          if ( ++v40 == v36 )
            goto LABEL_62;
        }
        v41 = *(_QWORD *)(a1 + 8);
        LODWORD(v56) = 24;
        v42 = &v55;
        *(_QWORD *)&v60 = &v55;
        v55 = v41;
        v61 = v38 | (unsigned __int8)v40;
        v43 = *(_DWORD *)(v41 + 1036);
        v59 = (char *)v41;
        DWORD2(v60) = 0;
        BYTE12(v60) = 2;
        v62 = 45;
        v63 = v43;
        v64 = 0;
        v44 = 0;
        v45 = 0;
        v46 = 0;
        v47 = 0;
        while ( (unsigned __int8)sub_25E00((__int64)&v59, nullptr, (__int64)&v67, (__int64)v42, v34, v35) )
        {
          switch ( v67 )
          {
            case 16:
              v45 = v68 | 0x6000000;
              break;
            case 32:
              v44 = v68 | 0x6000000;
              break;
            case 8:
              v46 = v68 | 0x6000000;
              break;
            default:
              if ( v47 < a13 )
              {
                if ( a12 )
                {
                  v48 = v47++;
                  *(_DWORD *)(a12 + 4 * v48) = v68 | 0x6000000;
                }
              }
              break;
          }
        }
        if ( a9 )
          *(_DWORD *)a9 = v46;
        if ( a10 )
          *(_DWORD *)a10 = v45;
        if ( a11 )
          *(_DWORD *)a11 = v44;
        a13 = v47;
      }
      if ( a14 )
        *a14 = a13;
      return 0;
    }
    else
    {
      return 2147942413LL;
    }
  }
  return result;
}

