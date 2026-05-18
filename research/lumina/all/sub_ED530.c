__int64 __fastcall sub_ED530(__int64 a1, unsigned int a2, _QWORD *a3, __int64 a4)
{
  unsigned int v4; // ebp
  __int64 v6; // r14
  int v8; // r12d
  int v10; // r15d
  int v11; // eax
  __int64 v12; // rax
  char v13; // si
  unsigned int v14; // eax
  unsigned int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rdi
  unsigned int *v19; // r9
  __int16 *v20; // r15
  unsigned int v21; // r13d
  __int16 v22; // bp
  unsigned __int16 v23; // bp
  int v24; // r12d
  unsigned int *v25; // rbp
  __int64 v26; // rdx
  bool v27; // al
  unsigned int v28; // eax
  unsigned int v29; // r8d
  unsigned int v30; // ebp
  int v31; // ebp
  unsigned int *v32; // r14
  __int16 *v33; // rbp
  __int16 v34; // ax
  __int64 v35; // r12
  unsigned __int16 v36; // ax
  int v37; // eax
  unsigned int *v38; // r10
  __int64 v39; // r11
  __int64 v40; // rdx
  unsigned __int16 v41; // r13
  int v42; // r15d
  unsigned int *v43; // rax
  unsigned int v44; // r14d
  bool v45; // cf
  unsigned int v46; // r11d
  unsigned int v47; // esi
  unsigned int v48; // eax
  unsigned int v49; // edx
  unsigned int *v50; // r10
  __int64 v51; // rcx
  unsigned int v52; // edx
  int v53; // eax
  int v54; // eax
  int v55; // edx
  int v56; // ecx
  unsigned int v57; // ebp
  int v58; // [rsp+Ch] [rbp-ECh]
  __int64 v59; // [rsp+10h] [rbp-E8h]
  unsigned int v60; // [rsp+18h] [rbp-E0h]
  int v61; // [rsp+18h] [rbp-E0h]
  _DWORD *v62; // [rsp+18h] [rbp-E0h]
  unsigned int v63; // [rsp+20h] [rbp-D8h]
  unsigned int v64; // [rsp+24h] [rbp-D4h]
  unsigned int v65; // [rsp+30h] [rbp-C8h]
  int v66; // [rsp+38h] [rbp-C0h]
  int v67; // [rsp+38h] [rbp-C0h]
  int v68; // [rsp+3Ch] [rbp-BCh]
  unsigned int *v69; // [rsp+48h] [rbp-B0h]
  int v70; // [rsp+50h] [rbp-A8h]
  int v71; // [rsp+54h] [rbp-A4h]
  unsigned int v72; // [rsp+58h] [rbp-A0h]
  int v73; // [rsp+5Ch] [rbp-9Ch]
  __int64 v74; // [rsp+60h] [rbp-98h]
  int v75; // [rsp+70h] [rbp-88h]
  int v76; // [rsp+74h] [rbp-84h]
  _QWORD *v77; // [rsp+78h] [rbp-80h]
  unsigned int v78; // [rsp+80h] [rbp-78h]
  unsigned int v79; // [rsp+84h] [rbp-74h]
  _QWORD v80[2]; // [rsp+88h] [rbp-70h] BYREF
  char *v81; // [rsp+98h] [rbp-60h] BYREF
  __int64 v82; // [rsp+A0h] [rbp-58h] BYREF
  unsigned int v83; // [rsp+B0h] [rbp-48h]
  unsigned __int16 v84; // [rsp+B4h] [rbp-44h]
  unsigned __int16 v85; // [rsp+B6h] [rbp-42h]
  unsigned __int64 v86; // [rsp+B8h] [rbp-40h]

  v86 = __readfsqword(0x28u);
  v80[0] = a4;
  v81 = nullptr;
  if ( !a2 )
    return 0;
  v6 = *(_QWORD *)a1;
  v8 = a2;
  v10 = *(_DWORD *)(a1 + 52);
  v59 = *(_QWORD *)(a1 + 40);
  v58 = *(_DWORD *)(a1 + 48);
  v63 = *(_DWORD *)(*(_QWORD *)a1 + 56LL);
  v4 = sub_ED1F0(a1, a2);
  if ( v4 )
    return 0;
  *(_DWORD *)(a1 + 48) = a2;
  *(_QWORD *)(a1 + 40) = "Page %u: ";
  v11 = sub_C3B70((_QWORD *)v6, a2, &v81);
  if ( v11 )
  {
    sub_ECFF0(a1, "unable to get the page. error code=%d", v11);
    v12 = (__int64)v81;
    goto LABEL_7;
  }
  v13 = *v81;
  *v81 = 0;
  v14 = sub_EBBD0((__int64)v81);
  v4 = v14;
  if ( v14 )
  {
    v4 = 0;
    sub_ECFF0(a1, "btreeInitPage() returns error code %d", v14);
    v12 = (__int64)v81;
    goto LABEL_7;
  }
  v15 = sub_E9270((__int64)v81);
  if ( v15 )
  {
    sub_ECFF0(a1, "free space corruption", v15);
    v12 = (__int64)v81;
    goto LABEL_7;
  }
  v16 = (__int64)v81;
  v17 = (unsigned __int8)v81[9];
  v18 = *((_QWORD *)v81 + 10);
  *(_QWORD *)(a1 + 40) = "On tree page %u cell %d: ";
  LODWORD(v16) = *(unsigned __int8 *)(v16 + 8);
  v74 = v17;
  v64 = (unsigned __int16)(_byteswap_ushort(*(_WORD *)(v18 + v17 + 5)) - 1) + 1;
  v72 = (*(unsigned __int8 *)(v18 + v17 + 4) | (*(unsigned __int8 *)(v18 + v17 + 3) << 8)) - 1;
  v75 = v17 - 4 * v16 + 12;
  if ( (_BYTE)v16 )
  {
    v19 = *(unsigned int **)(a1 + 88);
    v66 = 1;
    v68 = -1;
    *v19 = 0;
  }
  else
  {
    v57 = _byteswap_ulong(*(_DWORD *)(v18 + v17 + 8));
    if ( *(_BYTE *)(v6 + 33) )
    {
      *(_QWORD *)(a1 + 40) = "On page %u at right child: ";
      sub_ED130(a1, v57, 5u, v8);
    }
    v66 = 0;
    v68 = sub_ED530(a1, v57, v80, v80[0]);
    v19 = nullptr;
  }
  if ( v72 == -1 || !*(_DWORD *)(a1 + 28) )
  {
    *a3 = v80[0];
    v12 = (__int64)v81;
    v4 = v68 + 1;
    *(_QWORD *)(a1 + 40) = 0;
    goto LABEL_44;
  }
  v76 = v10;
  v77 = a3;
  v70 = 1;
  v69 = v19;
  v73 = v8;
  v20 = (__int16 *)(v18 + (int)(v75 + 2 * v72));
  v65 = v63 - 4;
  v21 = v72;
  do
  {
    *(_DWORD *)(a1 + 52) = v21;
    v22 = *v20--;
    v23 = __ROL2__(v22, 8);
    v24 = v23;
    if ( v64 > v23 || v23 > v65 )
    {
      sub_ECFF0(a1, "Offset %d out of range %d..%d", v23, v64, v65);
LABEL_38:
      v70 = 0;
      goto LABEL_32;
    }
    v25 = (unsigned int *)(v18 + v23);
    (*((void (__fastcall **)(char *, unsigned int *, __int64 *))v81 + 16))(v81, v25, &v82);
    if ( v24 + (unsigned int)v85 > v63 )
    {
      sub_ECFF0(a1, "Extends off end of page");
      goto LABEL_38;
    }
    if ( v81[1] )
    {
      v26 = v82;
      if ( v66 )
        v27 = v80[0] < v82;
      else
        v27 = v80[0] <= v82;
      if ( v27 )
      {
        sub_ECFF0(a1, "Rowid %lld out of order", v82);
        v26 = v82;
      }
      v80[0] = v26;
      v66 = 0;
    }
    if ( v83 > v84 )
    {
      v28 = (v83 - v84 + v63 - 5) / v65;
      v29 = _byteswap_ulong(*(unsigned int *)((char *)v25 + v85 - 4));
      if ( *(_BYTE *)(v6 + 33) )
      {
        v79 = (v83 - v84 + v63 - 5) / v65;
        v78 = v29;
        sub_ED130(a1, v29, 3u, v73);
        v28 = v79;
        v29 = v78;
      }
      sub_ED280(a1, 0, v29, v28);
    }
    if ( v81[8] )
    {
      sub_C3CE0(v69, (v24 << 16) | (v24 + v85 - 1));
    }
    else
    {
      v30 = _byteswap_ulong(*v25);
      if ( *(_BYTE *)(v6 + 33) )
        sub_ED130(a1, v30, 5u, v73);
      v31 = sub_ED530(a1, v30, v80, v80[0]);
      v66 = 0;
      if ( v31 != v68 )
      {
        sub_ECFF0(a1, "Child page depth differs");
        v68 = v31;
      }
    }
LABEL_32:
    --v21;
  }
  while ( v21 != -1 && *(_DWORD *)(a1 + 28) );
  v19 = v69;
  v10 = v76;
  v4 = v68 + 1;
  v8 = v73;
  *v77 = v80[0];
  *(_QWORD *)(a1 + 40) = 0;
  v12 = (__int64)v81;
  if ( !v70 )
  {
    *v81 = v13;
    v12 = (__int64)v81;
    goto LABEL_7;
  }
LABEL_44:
  if ( *(int *)(a1 + 28) > 0 )
  {
    if ( !*(_BYTE *)(v12 + 8) )
    {
      v19 = *(unsigned int **)(a1 + 88);
      *v19 = 0;
      if ( v72 != -1 )
      {
        v32 = v19;
        v60 = v4;
        v67 = v8;
        v33 = (__int16 *)(v18 + (int)(v75 + 2 * v72));
        do
        {
          v34 = *v33--;
          v35 = (unsigned __int16)__ROL2__(v34, 8);
          v36 = (*((__int64 (__fastcall **)(char *, __int64))v81 + 15))(v81, v18 + v35);
          sub_C3CE0(v32, ((_DWORD)v35 << 16) | (v35 + v36 - 1));
        }
        while ( (__int16 *)(v18 + (int)(v75 + 2 * v72) - 2 - 2LL * v72) != v33 );
        v4 = v60;
        v19 = v32;
        v8 = v67;
      }
    }
    v37 = *(unsigned __int8 *)(v18 + v74 + 2) | (*(unsigned __int8 *)(v18 + v74 + 1) << 8);
    if ( v37 )
    {
      v38 = v19;
      do
      {
        sub_C3CE0(
          v38,
          (v37 << 16) | (v37 + (*(unsigned __int8 *)(v18 + v37 + 3) | (*(unsigned __int8 *)(v18 + v37 + 2) << 8)) - 1));
        v37 = *(unsigned __int8 *)(v18 + v39 + 1) | (*(unsigned __int8 *)(v18 + v39) << 8);
      }
      while ( v37 );
      v19 = v38;
    }
    v40 = *v19;
    v41 = v64 - 1;
    if ( (_DWORD)v40 )
    {
      v61 = v10;
      v42 = 0;
      while ( 1 )
      {
        v43 = &v19[v40];
        v44 = v19[1];
        v19[1] = *v43;
        *v43 = -1;
        LODWORD(v43) = *v19 - 1;
        v45 = *v19 == 1;
        *v19 = (unsigned int)v43;
        if ( !v45 && (_DWORD)v43 != 1 )
        {
          v46 = v19[1];
          v47 = 1;
          v48 = 2;
          do
          {
            v50 = &v19[v48];
            v51 = v48 + 1;
            v49 = *v50;
            if ( *v50 > v19[v51] )
            {
              v49 = v19[v51];
              v50 = &v19[v51];
            }
            else
            {
              LODWORD(v51) = v48;
            }
            if ( v46 < v49 )
              break;
            v19[v47] = v49;
            *v50 = v46;
            v48 = 2 * v51;
            v47 = v51;
          }
          while ( 2 * (int)v51 <= *v19 );
        }
        v52 = HIWORD(v44);
        if ( v41 >= HIWORD(v44) )
          break;
        v53 = v52 + v42 - 1;
        v40 = *v19;
        v54 = v53 - v41;
        v41 = v44;
        v42 = v54;
        if ( !(_DWORD)v40 )
        {
          v10 = v61;
          goto LABEL_66;
        }
      }
      v71 = v42;
      v10 = v61;
      v62 = v19;
      sub_ECFF0(a1, "Multiple uses for byte %u of page %u", v52, v8);
      if ( !*v62 )
      {
        v55 = v71 + v63 - 1 - v41;
        goto LABEL_67;
      }
    }
    else
    {
      LOWORD(v44) = v64 - 1;
      v54 = 0;
LABEL_66:
      v55 = v54 + v63 - 1 - (unsigned __int16)v44;
LABEL_67:
      v56 = *(unsigned __int8 *)(v18 + v74 + 7);
      if ( v56 != v55 )
        sub_ECFF0(a1, "Fragmentation of %d bytes reported as %d on page %u", v55, v56, v8);
    }
    v12 = (__int64)v81;
  }
LABEL_7:
  if ( v12 )
    sub_C36A0(*(_QWORD *)(v12 + 112));
  *(_DWORD *)(a1 + 52) = v10;
  *(_QWORD *)(a1 + 40) = v59;
  *(_DWORD *)(a1 + 48) = v58;
  return v4;
}
