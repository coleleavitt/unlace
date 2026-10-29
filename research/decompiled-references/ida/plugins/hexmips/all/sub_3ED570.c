__int64 __fastcall sub_3ED570(__int64 a1, __int32 a2, char a3, double a4)
{
  __int64 v4; // rbp
  __int64 v6; // rax
  unsigned __int8 *v7; // r12
  unsigned __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rdx
  char v11; // al
  unsigned int v12; // r13d
  unsigned int v14; // esi
  _QWORD *v15; // rax
  __int16 v16; // dx
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rax
  unsigned __int16 v20; // ax
  __int64 v21; // rsi
  unsigned int v22; // r8d
  __int64 v23; // rdx
  int v24; // ecx
  __int64 v25; // rbp
  __int64 v26; // rdx
  __int64 v27; // rax
  int v28; // r13d
  _DWORD *v29; // rdi
  unsigned __int64 v30; // rcx
  __int64 (__fastcall *v31)(_DWORD *, unsigned int); // rax
  __int64 v32; // rsi
  int v33; // r8d
  int v34; // eax
  int v35; // edx
  int v36; // r12d
  int v37; // eax
  unsigned __int16 v38; // cx
  __int64 v39; // rbp
  __int64 v40; // rdx
  __int64 v41; // rax
  unsigned int v42; // r13d
  int *v43; // rdi
  __int64 v44; // rax
  unsigned int v45; // esi
  __int64 (*v46)(void); // rax
  signed int v47; // r14d
  signed int v48; // eax
  __int64 v49; // rdx
  __int64 v50; // rax
  __int64 v51; // rbp
  unsigned __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rdx
  __int64 v55; // rax
  unsigned int v56; // r13d
  _DWORD *v57; // rdi
  __int64 (__fastcall *v58)(_DWORD *); // rdx
  __int64 v59; // rdx
  __int64 v60; // rax
  _DWORD *v61; // rdi
  int v62; // edx
  __int64 (__fastcall *v63)(_DWORD *, unsigned int); // rcx
  int v64; // r13d
  int v65; // eax
  int v66; // ecx
  __int64 v67; // rax
  int v68; // r8d
  int v69; // ecx
  __int64 v70; // rsi
  __int64 v71; // rdx
  __int64 v72; // rdx
  int v73; // eax
  _DWORD *v74; // rdi
  __int64 (__fastcall *v75)(_DWORD *, unsigned int); // rax
  signed int v76; // eax
  unsigned int v77; // [rsp+1Ch] [rbp-2Ch]

  v4 = a2;
  v6 = 40LL * a2;
  v7 = (unsigned __int8 *)(a1 + v6 + 64);
  switch ( *(_BYTE *)(a1 + v6 + 65) )
  {
    case 1:
      v14 = *(unsigned __int16 *)(a1 + 40LL * a2 + 70);
      v15 = *(_QWORD **)(a1 + 832);
      if ( (_WORD)v14 == 64 )
      {
        v71 = v15[95];
        if ( v71 )
        {
          v12 = *(_DWORD *)(v15[94] + 4 * v71 - 4);
          v15[95] = v71 - 1;
          sub_3ED4A0((_QWORD *)a1, v12, 2, a4);
          return v12;
        }
        goto LABEL_82;
      }
      v16 = *(_WORD *)(a1 + 48);
      if ( v16 == 533 )
      {
        if ( (_DWORD)v4 == 1 )
          goto LABEL_13;
      }
      else if ( !(_DWORD)v4 && v16 == 540 )
      {
LABEL_13:
        v17 = v15[95];
        if ( v17 )
        {
          v12 = *(_DWORD *)(v15[94] + 4 * v17 - 4);
          v15[95] = v17 - 1;
LABEL_56:
          sub_3EC710(a1, *(unsigned __int16 *)(a1 + 40 * v4 + 70), v4, v12, 1);
          return v12;
        }
        goto LABEL_82;
      }
      v57 = *(_DWORD **)(a1 + 832);
      v58 = *(__int64 (__fastcall **)(_DWORD *))(*v15 + 168LL);
      if ( (char *)v58 == (char *)sub_3E5480 )
        return sub_3E5480(v57, v14);
      else
        return v58(v57);
    case 2:
      v18 = *(_QWORD *)(a1 + 832);
      v19 = *(_QWORD *)(v18 + 760);
      if ( !v19 )
        goto LABEL_82;
      v12 = *(_DWORD *)(*(_QWORD *)(v18 + 752) + 4 * v19 - 4);
      *(_QWORD *)(v18 + 760) = v19 - 1;
      v20 = *(_WORD *)(a1 + 48);
      v21 = *(_QWORD *)(a1 + 40LL * a2 + 80);
      if ( v20 == 1740 )
        goto LABEL_58;
      if ( v20 > 0x6CCu )
      {
        if ( v20 != 1742 )
        {
LABEL_20:
          v22 = v12;
          v23 = *(_QWORD *)(a1 + 40 * v4 + 80);
          v24 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL);
          return sub_3EC4F0(a1, v7, v23, v24, v22);
        }
      }
      else if ( v20 != 205 && v20 != 495 )
      {
        goto LABEL_20;
      }
LABEL_58:
      sub_3ECCE0(a1, v21, v12);
      return v12;
    case 3:
      v25 = a1 + 40LL * a2;
      if ( *(_BYTE *)(v25 + 96) == 1 )
        return (unsigned int)-1;
      v26 = *(_QWORD *)(a1 + 832);
      v27 = *(_QWORD *)(v26 + 760);
      if ( !v27 )
        goto LABEL_82;
      v28 = *(_DWORD *)(*(_QWORD *)(v26 + 752) + 4 * v27 - 4);
      *(_QWORD *)(v26 + 760) = v27 - 1;
      v29 = *(_DWORD **)(a1 + 832);
      v30 = *(_QWORD *)(v25 + 88);
      v31 = *(__int64 (__fastcall **)(_DWORD *, unsigned int))(*(_QWORD *)v29 + 168LL);
      v32 = (v30 >> 5) & 0x1F;
      if ( v31 == sub_3E5480 )
      {
        v33 = v29[120];
        v34 = v29[89];
        v35 = v29[20];
        if ( v33 <= v34 )
        {
          LODWORD(v30) = v30 & 0x1F;
          v36 = v33 + v35 * (31 - v32);
LABEL_26:
          v37 = v33 + v35 * (31 - v30);
          goto LABEL_27;
        }
        LODWORD(v30) = v30 & 0x1F;
        v36 = v35 * v32 + v34;
        goto LABEL_64;
      }
      v73 = v31(v29, v32);
      v74 = *(_DWORD **)(a1 + 832);
      v36 = v73;
      v30 = *(_QWORD *)(v25 + 88) & 0x1FLL;
      v75 = *(__int64 (__fastcall **)(_DWORD *, unsigned int))(*(_QWORD *)v74 + 168LL);
      if ( v75 == sub_3E5480 )
      {
        v33 = v74[120];
        v34 = v74[89];
        v35 = v74[20];
        if ( v33 <= v34 )
          goto LABEL_26;
LABEL_64:
        v37 = v35 * v30 + v34;
        goto LABEL_27;
      }
      v37 = v75(v74, v30);
      v35 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL);
LABEL_27:
      v38 = *(_WORD *)(a1 + 48);
      v39 = v37;
      if ( v38 == 1710 )
        goto LABEL_71;
      if ( v38 > 0x6AEu )
      {
        if ( (unsigned __int16)(v38 - 1711) > 1u )
          goto LABEL_31;
LABEL_69:
        v68 = v35;
        v69 = v28;
        v70 = 2;
        goto LABEL_70;
      }
      if ( v38 != 815 )
      {
        if ( v38 != 1708 )
        {
LABEL_31:
          sub_3EAB70(a1, 0xCu, v35, v36, v37, v28, 0);
          return (unsigned int)v28;
        }
        goto LABEL_69;
      }
LABEL_71:
      v68 = v35;
      v69 = v28;
      v70 = 4;
LABEL_70:
      sub_3EC710(a1, v70, 1, v69, v68);
      sub_3EAB70(a1, 0xEu, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL), v39, v28, v28, 0);
      sub_3EAB70(a1, 0xCu, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL), v36, v28, v28, 0);
      return (unsigned int)v28;
    case 4:
      v40 = *(_QWORD *)(a1 + 832);
      v41 = *(_QWORD *)(v40 + 760);
      if ( !v41 )
        goto LABEL_82;
      v42 = *(_DWORD *)(*(_QWORD *)(v40 + 752) + 4 * v41 - 4);
      *(_QWORD *)(v40 + 760) = v41 - 1;
      v43 = *(int **)(a1 + 832);
      v44 = a1 + 40LL * a2;
      v45 = *(unsigned __int16 *)(v44 + 70);
      if ( (_WORD)v45 == 64 )
      {
        v72 = *((_QWORD *)v43 + 95);
        if ( !v72 )
          goto LABEL_82;
        v47 = *(_DWORD *)(*((_QWORD *)v43 + 94) + 4 * v72 - 4);
        *((_QWORD *)v43 + 95) = v72 - 1;
        sub_3ED4A0((_QWORD *)a1, v47, *(_BYTE *)(v44 + 69), a4);
        v43 = *(int **)(a1 + 832);
      }
      else
      {
        v46 = *(__int64 (**)(void))(*(_QWORD *)v43 + 168LL);
        if ( (char *)v46 == (char *)sub_3E5480 )
        {
          v47 = sub_3E5480(v43, v45);
        }
        else
        {
          v76 = v46();
          v43 = *(int **)(a1 + 832);
          v47 = v76;
        }
      }
      v48 = sub_3EC4F0(a1, v7, *(_QWORD *)(a1 + 40 * v4 + 80), v43[20], v42);
      v12 = v48;
      if ( v48 == -1 )
        return v12;
      sub_3EAB70(a1, 0xCu, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL), v47, v48, v48, 0);
      sub_3E8540(*(_QWORD *)(a1 + 832), v47);
      return v12;
    case 5:
      v49 = *(_QWORD *)(a1 + 832);
      v50 = *(_QWORD *)(v49 + 760);
      if ( !v50 )
        goto LABEL_82;
      v22 = *(_DWORD *)(*(_QWORD *)(v49 + 752) + 4 * v50 - 4);
      *(_QWORD *)(v49 + 760) = v50 - 1;
      v51 = *(_QWORD *)(a1 + 40LL * a2 + 72);
      v52 = *(unsigned __int16 *)(a1 + 48);
      if ( (_WORD)v52 == 135 )
      {
        v77 = v22;
        v67 = sub_CBD70();
        v22 = v77;
        v51 = (int)(v51 << (4 * (v67 != 2) + 12));
      }
      else if ( (unsigned __int16)v52 > 0x87u )
      {
        if ( (_WORD)v52 == 569 )
LABEL_44:
          v51 += 32;
      }
      else if ( (unsigned __int16)(v52 - 16) <= 4u )
      {
        v53 = 1376256;
        if ( _bittest64(&v53, v52) )
          goto LABEL_44;
      }
      v23 = v51;
      v24 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL);
      return sub_3EC4F0(a1, v7, v23, v24, v22);
    case 7:
      if ( !a3 )
        return (unsigned int)-1;
      v54 = *(_QWORD *)(a1 + 832);
      v55 = *(_QWORD *)(v54 + 760);
      if ( !v55 )
        goto LABEL_82;
      v56 = *(_DWORD *)(*(_QWORD *)(v54 + 752) + 4 * v55 - 4);
      *(_QWORD *)(v54 + 760) = v55 - 1;
      sub_3EC710(a1, *(_QWORD *)(a1 + 40LL * a2 + 80), a2, v56, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL));
      return v56;
    case 9:
      v8 = *(unsigned __int16 *)(a1 + 48);
      if ( (unsigned __int16)v8 <= 0x38u && (v9 = 0x12A000000000000LL, _bittest64(&v9, v8)) && a2 == 1
        || (v10 = a1 + 40LL * a2, v11 = *(_BYTE *)(v10 + 97), v11 == 5) )
      {
        v59 = *(_QWORD *)(a1 + 832);
        v60 = *(_QWORD *)(v59 + 760);
        if ( v60 )
        {
          v12 = *(_DWORD *)(*(_QWORD *)(v59 + 752) + 4 * v60 - 4);
          *(_QWORD *)(v59 + 760) = v60 - 1;
          goto LABEL_56;
        }
LABEL_82:
        sub_3E5460(a4);
      }
      if ( v11 != 4 )
        return (unsigned int)-1;
      v61 = *(_DWORD **)(a1 + 832);
      v62 = *(unsigned __int16 *)(v10 + 70);
      v63 = *(__int64 (__fastcall **)(_DWORD *, unsigned int))(*(_QWORD *)v61 + 168LL);
      if ( v63 == sub_3E5480 )
      {
        if ( (unsigned __int16)v62 <= 0x1Fu )
        {
          v64 = v61[121];
          v65 = v61[152];
          v66 = v61[20];
          if ( v64 >= v65 )
            return (unsigned int)(v65 + v66 * (31 - v62));
          else
            return (unsigned int)(v66 * v62 + v64);
        }
        return (unsigned int)-1;
      }
      return v63(v61, v62 + 32);
    case 0xB:
      return *(_DWORD *)(*(_QWORD *)(a1 + 832) + 644LL) + (unsigned int)*(unsigned __int16 *)(a1 + 40LL * a2 + 70);
    default:
      return (unsigned int)-1;
  }
}

