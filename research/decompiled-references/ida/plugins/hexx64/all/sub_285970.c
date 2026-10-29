__int64 __fastcall sub_285970(__int64 a1, __int64 a2, double a3)
{
  unsigned __int64 v4; // rax
  __int64 v6; // rdx
  __int64 v7; // rbx
  int v8; // edx
  int tinfo_size; // eax
  int v11; // r12d
  int v12; // r13d
  int tinfo_property; // ebx
  bool v14; // zf
  __int64 v15; // rax
  unsigned int v16; // eax
  __int64 v17; // rsi
  __int64 v18; // rdi
  int v19; // r12d
  int v20; // eax
  __int64 v21; // rdi
  int v22; // eax
  __int64 v23; // r8
  __int64 v24; // r15
  int v25; // r12d
  int v26; // eax
  int v27; // ecx
  __int64 v28; // rdx
  int v29; // r12d
  int v30; // r15d
  int v31; // eax
  int v32; // r8d
  int v33; // eax
  __int64 v34; // rax
  int v35; // r12d
  __int64 v36; // rax
  unsigned int v37; // eax
  __int64 v38; // rsi
  __int64 v39; // rdi
  int v40; // ecx
  __int64 v41; // rax
  int v42; // edx
  unsigned __int64 v43; // rcx
  int v44; // esi
  int v45; // edx
  int v46; // eax
  int v47; // edx
  int v48; // ecx
  int v49; // eax
  int v50; // r15d
  int v51; // r12d
  int v52; // eax
  int v53; // ecx
  int v54; // eax
  int v55; // eax
  int v56; // ebx
  int v57; // r12d
  unsigned __int64 v58; // rax
  int v59; // ecx
  unsigned __int64 v60; // rax
  int v61; // ecx
  int v62; // eax
  int v63; // ecx
  __int64 v64; // [rsp+0h] [rbp-68h]
  int v65; // [rsp+0h] [rbp-68h]
  int v66; // [rsp+0h] [rbp-68h]
  int v67; // [rsp+Ch] [rbp-5Ch]
  unsigned int v68; // [rsp+1Ch] [rbp-4Ch] BYREF
  int v69; // [rsp+20h] [rbp-48h] BYREF
  int v70; // [rsp+24h] [rbp-44h] BYREF
  unsigned __int64 v71; // [rsp+28h] [rbp-40h]

  v4 = *(unsigned int *)(a1 + 8);
  v71 = __readfsqword(0x28u);
  if ( (unsigned int)v4 <= 0x31 )
  {
    v6 = 0x20000FFC60000LL;
    if ( _bittest64(&v6, v4) )
      goto LABEL_3;
  }
  if ( (unsigned __int8)sub_29D090(a1, a2) )
  {
    if ( *(_DWORD *)(a1 + 8) != 61 || sub_255A30(*(__int64 **)(a1 + 24)) )
    {
LABEL_3:
      LOWORD(v7) = 1;
      v8 = 0;
      return (v8 << 16) | (unsigned int)(unsigned __int16)v7;
    }
LABEL_10:
    LOWORD(v7) = 0;
LABEL_11:
    v8 = 0;
  }
  else
  {
    tinfo_size = get_tinfo_size();
    v11 = tinfo_size;
    if ( tinfo_size == -1 )
    {
      v8 = 0;
      LOWORD(v7) = 8 * *(_DWORD *)(a2 + 88);
    }
    else
    {
      v12 = 8 * tinfo_size;
      tinfo_property = get_tinfo_property();
      v14 = (get_tinfo_property() & 0xF) == 9;
      v15 = (unsigned int)(*(_DWORD *)(a1 + 8) - 19);
      if ( v14 )
      {
LABEL_16:
        LODWORD(v7) = v12;
        v19 = 0;
LABEL_17:
        switch ( v15 )
        {
          case 0LL:
          case 1LL:
          case 2LL:
            goto LABEL_10;
          case 19LL:
          case 20LL:
            LOWORD(v29) = 0;
            v32 = 0;
            v30 = 0;
LABEL_30:
            v66 = v32;
            v33 = sub_285700(*(_QWORD *)(a1 + 32), a3);
            if ( *(_DWORD *)(a1 + 8) == 38 && ((__int16)v29 >= v12 || v30 >= v12) )
            {
              v8 = v66 + v33 - 1;
              LOWORD(v7) = v12;
              if ( (__int16)(v66 + v33 - 1) > (__int16)v12 )
                v8 = v12;
              goto LABEL_21;
            }
            LOWORD(v7) = v29 + 1 - v33;
            if ( (v7 & 0x8000u) != 0LL )
              LOWORD(v7) = 0;
            v8 = 0;
            break;
          case 21LL:
            if ( !*(_BYTE *)(*(_QWORD *)(a2 + 96) + 130LL) )
              goto LABEL_10;
            goto LABEL_35;
          case 22LL:
LABEL_35:
            v34 = *(_QWORD *)(a1 + 32);
            if ( *(_DWORD *)(v34 + 8) != 61 )
              goto LABEL_10;
            v35 = 0;
            v30 = 0;
            goto LABEL_37;
          default:
            goto LABEL_19;
        }
      }
      else
      {
        switch ( *(_DWORD *)(a1 + 8) )
        {
          case 0x13:
          case 0x14:
          case 0x15:
          case 0x26:
          case 0x27:
          case 0x28:
          case 0x29:
            v20 = sub_285970(*(_QWORD *)(a1 + 24), a2);
            v21 = *(_QWORD *)(a1 + 32);
            v69 = v20;
            v22 = sub_285970(v21, a2);
            v23 = *(_QWORD *)(a1 + 24);
            v7 = *(_QWORD *)(a1 + 32);
            v24 = *(_QWORD *)(a2 + 96);
            v70 = v22;
            v64 = v23;
            v25 = get_tinfo_size();
            v26 = get_tinfo_size();
            if ( v25 >= v26 )
              v26 = v25;
            v27 = v26;
            if ( v26 < *(unsigned __int8 *)(v24 + 130) )
              v27 = *(unsigned __int8 *)(v24 + 130);
            v67 = v27;
            sub_285650((__int16 *)&v69, v24, v64 + 48, v27);
            v28 = v7 + 48;
            v29 = (__int16)v69;
            LOWORD(v7) = 0;
            v65 = HIWORD(v69);
            sub_285650((__int16 *)&v70, v24, v28, v67);
            v30 = (__int16)v70;
            v31 = SHIWORD(v70);
            v32 = v65;
            goto LABEL_28;
          case 0x20:
          case 0x21:
            v37 = sub_285970(*(_QWORD *)(a1 + 24), a2);
            v38 = *(_QWORD *)(a2 + 96);
            v68 = v37;
            sub_285650((__int16 *)&v68, v38, *(_QWORD *)(a1 + 24) + 48LL, 0);
            v39 = *(_QWORD *)(a1 + 32);
            LODWORD(v7) = (unsigned __int16)v68;
            v19 = HIWORD(v68);
            if ( *(_DWORD *)(v39 + 8) != 61 || (v60 = sub_281A60(v39, a3)) == 0 || v60 >= v12 )
            {
              v40 = *(_DWORD *)(a1 + 8);
              if ( v40 == 33 )
                goto LABEL_11;
              if ( (__int16)v7 < v12 )
                v19 = 0;
              v15 = (unsigned int)(v40 - 19);
              goto LABEL_17;
            }
            v61 = *(_DWORD *)(a1 + 8);
            if ( v61 != 33 )
            {
              if ( (__int16)v7 == v12 )
              {
                v19 += v60;
                v15 = (unsigned int)(v61 - 19);
              }
              else
              {
                LODWORD(v7) = v7 - v60;
                if ( (v7 & 0x8000u) != 0LL )
                  LODWORD(v7) = 0;
                v15 = (unsigned int)(v61 - 19);
              }
              goto LABEL_17;
            }
            LOWORD(v7) = v7 - v60;
            if ( (v7 & 0x8000u) != 0LL )
              goto LABEL_10;
LABEL_19:
            v8 = v19;
            if ( (__int16)v7 <= (__int16)v19 )
              v8 = v7;
            goto LABEL_21;
          case 0x22:
            v16 = sub_285970(*(_QWORD *)(a1 + 24), a2);
            v17 = *(_QWORD *)(a2 + 96);
            v68 = v16;
            sub_285650((__int16 *)&v68, v17, *(_QWORD *)(a1 + 24) + 48LL, 0);
            v18 = *(_QWORD *)(a1 + 32);
            if ( *(_DWORD *)(v18 + 8) != 61 )
            {
              v15 = (unsigned int)(*(_DWORD *)(a1 + 8) - 19);
              goto LABEL_16;
            }
            v56 = (unsigned __int16)v68;
            v57 = HIWORD(v68);
            v58 = sub_281A60(v18, a3);
            v59 = *(_DWORD *)(a1 + 8);
            if ( v58 )
            {
              if ( v58 < v12 )
              {
                LODWORD(v7) = v58 + v56;
                if ( (__int16)v7 <= v12 )
                {
                  v19 = v57 - v58;
                  v15 = (unsigned int)(v59 - 19);
                  goto LABEL_17;
                }
              }
            }
            v15 = (unsigned int)(v59 - 19);
            goto LABEL_16;
          case 0x30:
            v68 = sub_285970(*(_QWORD *)(a1 + 24), a2);
            v19 = HIWORD(v68);
            v46 = get_tinfo_size();
            if ( (__int16)v68 <= v12 )
            {
              v55 = 8 * v46;
              if ( (__int16)v68 >= v55 && v12 > v55 )
              {
                v62 = get_tinfo_property();
                v63 = *(_DWORD *)(a1 + 8);
                if ( v62 == 1 )
                {
                  LODWORD(v7) = v12;
                  v15 = (unsigned int)(v63 - 19);
                  v19 = v19 - v68 + v12 + 1;
                }
                else
                {
                  LODWORD(v7) = v68;
                  v15 = (unsigned int)(v63 - 19);
                }
              }
              else
              {
                LODWORD(v7) = v68;
                v15 = (unsigned int)(*(_DWORD *)(a1 + 8) - 19);
              }
            }
            else
            {
              LODWORD(v7) = v12;
              v19 = v19 - v68 + v12;
              v15 = (unsigned int)(*(_DWORD *)(a1 + 8) - 19);
            }
            goto LABEL_17;
          case 0x3D:
            v41 = sub_32ABC0(**(_QWORD **)(a1 + 24), v11, tinfo_property != 2);
            if ( v12 <= 0 || !v41 )
            {
              v31 = 0;
              v30 = 0;
              v32 = 0;
              v29 = 0;
              LOWORD(v7) = 0;
              goto LABEL_28;
            }
            v42 = 0;
            break;
          default:
            goto LABEL_16;
        }
        while ( 1 )
        {
          if ( v42 + 1 == v12 )
          {
            LODWORD(v7) = v12;
            goto LABEL_52;
          }
          if ( v42 == 63 )
          {
            LOBYTE(v42) = 63;
            LODWORD(v7) = 64;
            goto LABEL_52;
          }
          if ( (v41 & -(1LL << ((unsigned __int8)v42 + 1))) == 0 )
            break;
          ++v42;
        }
        LODWORD(v7) = v42 + 1;
LABEL_52:
        v43 = 1LL << v42;
        if ( ((1LL << v42) & v41) != 0 )
        {
          v44 = 1;
          do
          {
            v43 >>= 1;
            v45 = v44++;
          }
          while ( (v43 & v41) != 0 );
          v19 = v45;
          v15 = (unsigned int)(*(_DWORD *)(a1 + 8) - 19);
          goto LABEL_17;
        }
        v31 = 0;
        v30 = 0;
        v32 = 0;
        v29 = 0;
LABEL_28:
        switch ( *(_DWORD *)(a1 + 8) )
        {
          case 0x13:
          case 0x14:
            LODWORD(v7) = v29;
            if ( (__int16)v30 >= (__int16)v29 )
              LODWORD(v7) = v30;
            v47 = (__int16)v29 - (__int16)v32;
            v48 = (__int16)v30 - v31;
            v49 = (__int16)v29;
            if ( v47 < v48 )
              v47 = v48;
            if ( (__int16)v30 <= (__int16)v29 )
              v49 = v30;
            if ( v47 >= v49 )
              v49 = v47;
            v8 = v7 - v49;
            if ( (__int16)(v7 - v49) > (__int16)v7 )
              v8 = v7;
            goto LABEL_21;
          case 0x15:
            LODWORD(v7) = v29;
            if ( (__int16)v30 <= (__int16)v29 )
              LODWORD(v7) = v30;
            v51 = v29 - (__int16)v32;
            v52 = v30 - v31;
            if ( v51 >= v52 )
              v52 = v51;
            if ( v52 < (__int16)v7 )
              v52 = (__int16)v7;
            v8 = v7 - v52;
            if ( (__int16)(v7 - v52) > (__int16)v7 )
              v8 = v7;
            goto LABEL_21;
          case 0x26:
          case 0x27:
            goto LABEL_30;
          case 0x28:
            v53 = 8 * *(unsigned __int8 *)(*(_QWORD *)(a2 + 96) + 130LL);
            if ( v53 > (__int16)v29 && v53 > (__int16)v30 )
              goto LABEL_69;
            LODWORD(v7) = v29;
            v54 = (__int16)v30;
            if ( (__int16)v30 >= (__int16)v29 )
              LODWORD(v7) = v30;
            if ( (__int16)v29 - (__int16)v32 <= (__int16)v30 )
              v54 = (__int16)v29 - (__int16)v32;
            v8 = v7 - v54;
            if ( (__int16)(v7 - v54) > (__int16)v7 )
              v8 = v7;
            goto LABEL_21;
          case 0x29:
LABEL_69:
            if ( (__int16)v30 > (__int16)v29 )
            {
              v50 = v30 - v31;
              LOWORD(v7) = v29;
              if ( v50 < (__int16)v29 - (__int16)v32 )
                v50 = (__int16)v29 - (__int16)v32;
              v8 = v29 - v50;
              if ( (__int16)(v29 - v50) > (__int16)v29 )
                v8 = v29;
              goto LABEL_21;
            }
            if ( (_WORD)v30 == (_WORD)v29 )
            {
              if ( (__int16)v32 <= (__int16)v31 )
                v31 = v32;
              v35 = v31;
              v34 = *(_QWORD *)(a1 + 32);
              if ( *(_DWORD *)(v34 + 8) != 61 )
              {
                v8 = v35;
                LOWORD(v7) = v30;
                if ( (__int16)v35 > (__int16)v30 )
                  v8 = v30;
                goto LABEL_21;
              }
            }
            else
            {
              v34 = *(_QWORD *)(a1 + 32);
              if ( *(_DWORD *)(v34 + 8) != 61 )
              {
                LOWORD(v7) = v30;
                v8 = 0;
                return (v8 << 16) | (unsigned int)(unsigned __int16)v7;
              }
              v35 = 0;
            }
            break;
          default:
            goto LABEL_11;
        }
LABEL_37:
        v36 = sub_255A30(*(__int64 **)(v34 + 24));
        if ( (v36 & (v36 - 1)) != 0 )
        {
          v8 = v35;
          LOWORD(v7) = v30;
          if ( (__int16)v30 <= (__int16)v35 )
            v8 = v30;
        }
        else
        {
          LOWORD(v7) = v30 - 1;
          v8 = v35;
          if ( (__int16)(v30 - 1) <= (__int16)v35 )
            v8 = v30 - 1;
        }
LABEL_21:
        if ( (__int16)v8 <= 1 )
          v8 = 0;
      }
    }
  }
  return (v8 << 16) | (unsigned int)(unsigned __int16)v7;
}

