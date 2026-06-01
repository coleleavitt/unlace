__int64 __fastcall sub_208730(_QWORD *a1, __int64 a2, double a3, __m128 a4, __m128 a5)
{
  _QWORD *v5; // rbx
  unsigned __int64 v6; // rax
  __int64 v7; // rax
  __int64 *v8; // rsi
  __int64 v9; // rax
  int v10; // eax
  __m128 v11; // xmm0
  __int64 v12; // rax
  unsigned __int64 *v13; // rdx
  unsigned __int64 *v14; // rax
  unsigned __int64 v15; // rdx
  unsigned __int64 *v16; // rsi
  unsigned __int64 v17; // rcx
  __int64 result; // rax
  unsigned __int64 v19; // r12
  unsigned __int64 v20; // rbp
  __int64 v21; // r13
  __int64 v22; // r13
  _QWORD *v23; // rdi
  _QWORD *v24; // rdi
  _QWORD *v25; // rdi
  _QWORD *v26; // rdi
  _QWORD *v27; // [rsp+8h] [rbp-1B0h]
  int v28; // [rsp+8h] [rbp-1B0h]
  unsigned int v29; // [rsp+8h] [rbp-1B0h]
  int v30; // [rsp+8h] [rbp-1B0h]
  int v31; // [rsp+8h] [rbp-1B0h]
  int v32; // [rsp+8h] [rbp-1B0h]
  int v33; // [rsp+8h] [rbp-1B0h]
  int v34; // [rsp+8h] [rbp-1B0h]
  int v35; // [rsp+8h] [rbp-1B0h]
  int v36; // [rsp+8h] [rbp-1B0h]
  int v37; // [rsp+8h] [rbp-1B0h]
  int v38; // [rsp+8h] [rbp-1B0h]
  int v39; // [rsp+8h] [rbp-1B0h]
  int v40; // [rsp+8h] [rbp-1B0h]
  int v41; // [rsp+8h] [rbp-1B0h]
  int v42; // [rsp+8h] [rbp-1B0h]
  _QWORD *v43; // [rsp+18h] [rbp-1A0h] BYREF
  __int64 v44; // [rsp+20h] [rbp-198h]
  _QWORD *v45; // [rsp+28h] [rbp-190h]
  __int64 *v46; // [rsp+30h] [rbp-188h]
  unsigned __int64 *v47; // [rsp+38h] [rbp-180h]
  unsigned __int64 *v48; // [rsp+40h] [rbp-178h]
  __m128i *v49; // [rsp+48h] [rbp-170h]
  __m128i v50; // [rsp+50h] [rbp-168h] BYREF
  int v51; // [rsp+60h] [rbp-158h]
  __int64 v52; // [rsp+70h] [rbp-148h]
  __int64 v53[3]; // [rsp+80h] [rbp-138h] BYREF
  char v54; // [rsp+98h] [rbp-120h]
  _QWORD v55[5]; // [rsp+A0h] [rbp-118h] BYREF
  char v56; // [rsp+C8h] [rbp-F0h]
  __m128 v57; // [rsp+D0h] [rbp-E8h]
  __int64 v58; // [rsp+E0h] [rbp-D8h]
  __int64 v59; // [rsp+E8h] [rbp-D0h] BYREF
  int v60; // [rsp+F0h] [rbp-C8h]
  __int16 v61; // [rsp+F4h] [rbp-C4h]
  __int64 (__fastcall **v62)(); // [rsp+F8h] [rbp-C0h]
  __int64 v63; // [rsp+100h] [rbp-B8h]
  __int64 v64; // [rsp+108h] [rbp-B0h]
  __int64 v65; // [rsp+110h] [rbp-A8h]
  __int64 v66; // [rsp+118h] [rbp-A0h]
  char v67; // [rsp+120h] [rbp-98h]
  int v68; // [rsp+128h] [rbp-90h]
  __int64 v69; // [rsp+138h] [rbp-80h]
  _QWORD *v70; // [rsp+140h] [rbp-78h]
  _QWORD *v71; // [rsp+148h] [rbp-70h]
  __int64 *v72; // [rsp+150h] [rbp-68h]
  __int64 v73; // [rsp+158h] [rbp-60h]
  int v74; // [rsp+160h] [rbp-58h]
  _QWORD *v75; // [rsp+168h] [rbp-50h]
  unsigned __int64 v76; // [rsp+178h] [rbp-40h]

  v44 = a2;
  v76 = __readfsqword(0x28u);
  v49 = &v50;
  v50 = 0u;
  sub_207EA0(&v50, a1, nullptr, a3, a4, a5);
  v47 = (unsigned __int64 *)v50.m128i_i64[0];
  if ( v50.m128i_i64[1] )
  {
    if ( v47 )
    {
      v48 = (unsigned __int64 *)v47[1];
      if ( v48 == v47 )
      {
LABEL_21:
        LODWORD(result) = 0;
      }
      else
      {
        while ( 1 )
        {
          v5 = (_QWORD *)v48[5];
          v6 = v48[6];
          v27 = v48 + 5;
          v43 = a1 + 54;
          v45 = &v5[3 * v6];
          if ( v45 != v5 )
            break;
LABEL_13:
          if ( (*v48 & 2) != 0 )
          {
LABEL_20:
            if ( v48 == v47 )
              goto LABEL_21;
          }
          else
          {
            v13 = (unsigned __int64 *)v48[2];
            if ( (*(_BYTE *)v13 & 2) != 0 )
            {
              v14 = (unsigned __int64 *)(*v48 & 0xFFFFFFFFFFFFFFFCLL);
              v15 = *v14;
              if ( (*v14 & 2) == 0 )
              {
                v16 = v48;
                while ( (unsigned __int64 *)v14[2] == v16 )
                {
                  v16 = v14;
                  v17 = v15 & 0xFFFFFFFFFFFFFFFCLL;
                  v15 = *(_QWORD *)(v15 & 0xFFFFFFFFFFFFFFFCLL);
                  if ( (v15 & 2) != 0 )
                  {
                    v48 = (unsigned __int64 *)v17;
                    goto LABEL_20;
                  }
                  v14 = (unsigned __int64 *)v17;
                }
              }
            }
            else
            {
              do
              {
                v14 = v13;
                v13 = (unsigned __int64 *)v13[1];
              }
              while ( (*(_BYTE *)v13 & 2) == 0 );
            }
            v48 = v14;
            if ( v14 == v47 )
              goto LABEL_21;
          }
        }
        while ( 1 )
        {
          v53[1] = 0;
          v54 = 0;
          v58 = v44;
          v11 = _mm_loadh_ps((const double *)&v43);
          v53[2] = 0;
          v53[0] = (__int64)off_4CC080;
          memset(&v55[2], 0, 24);
          v56 = 0;
          v59 = -1;
          v60 = -1;
          v61 = 0;
          v55[1] = a1;
          v55[0] = off_4CC058;
          v51 = 0;
          v57 = v11;
          copy_argloc();
          v52 = -1;
          v63 = 0;
          v64 = 0;
          v65 = 0;
          v66 = 0;
          v67 = 0;
          v62 = (__int64 (__fastcall **)())&unk_4D8FE0;
          v68 = 0;
          copy_argloc();
          v71 = v5;
          v73 = 0;
          v69 = v52;
          v70 = v27;
          v72 = &v59;
          v74 = 0x10000;
          if ( v5 )
          {
            v12 = v5[1];
            if ( v12 )
              v7 = *(_QWORD *)(v12 + 24);
            else
              v7 = *(_QWORD *)(*v5 + 32LL);
            v69 = v7;
            v59 = v7;
          }
          cleanup_argloc();
          v8 = (__int64 *)a1[98];
          v62 = off_4CC028;
          v75 = v55;
          v9 = *v5;
          v46 = v53;
          v10 = sub_6BB50(v53, v8, *(_DWORD *)(v9 + 72), 0);
          if ( v10 )
            break;
          v53[0] = (__int64)off_4CC080;
          v62 = (__int64 (__fastcall **)())&unk_4D8FE0;
          v55[0] = off_4CC058;
          v5 = v71 + 3;
          cleanup_argloc();
          v53[0] = (__int64)off_4C8C78;
          qfree();
          if ( v5 == v45 )
            goto LABEL_13;
        }
        v28 = v10;
        v62 = (__int64 (__fastcall **)())&unk_4D8FE0;
        v53[0] = (__int64)off_4CC080;
        v55[0] = off_4CC058;
        cleanup_argloc();
        v53[0] = (__int64)off_4C8C78;
        qfree();
        LODWORD(result) = v28;
      }
      v19 = *v47;
      v20 = *v47 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (*(_BYTE *)v20 & 2) != 0 )
        goto LABEL_24;
      v21 = *(_QWORD *)(v20 + 8);
      if ( (*(_BYTE *)v21 & 2) != 0 )
      {
        v22 = *(_QWORD *)(v20 + 16);
        if ( (*(_BYTE *)v22 & 2) != 0 )
          goto LABEL_51;
        goto LABEL_33;
      }
      v25 = *(_QWORD **)(v21 + 8);
      if ( (*(_BYTE *)v25 & 2) != 0 )
      {
        v26 = *(_QWORD **)(v21 + 16);
        if ( (*(_BYTE *)v26 & 2) != 0 )
        {
LABEL_55:
          if ( *(_QWORD *)(v21 + 40) )
          {
            *(_QWORD *)(v21 + 48) = 0;
            v39 = result;
            qfree();
            LODWORD(result) = v39;
          }
          v40 = result;
          cleanup_argloc();
          *(_QWORD *)v21 |= 2uLL;
          LODWORD(result) = v40;
LABEL_47:
          if ( v21 )
          {
            v36 = result;
            qfree();
            LODWORD(result) = v36;
          }
          v22 = *(_QWORD *)(v20 + 16);
          if ( (*(_BYTE *)v22 & 2) != 0 )
          {
LABEL_39:
            if ( (*(_BYTE *)v20 & 2) != 0 )
            {
LABEL_40:
              if ( v19 > 3 )
              {
                v33 = result;
                qfree();
                LODWORD(result) = v33;
              }
              goto LABEL_24;
            }
LABEL_51:
            if ( *(_QWORD *)(v20 + 40) )
            {
              *(_QWORD *)(v20 + 48) = 0;
              v37 = result;
              qfree();
              LODWORD(result) = v37;
            }
            v38 = result;
            cleanup_argloc();
            *(_QWORD *)v20 |= 2uLL;
            LODWORD(result) = v38;
            goto LABEL_40;
          }
LABEL_33:
          v23 = *(_QWORD **)(v22 + 8);
          if ( (*(_BYTE *)v23 & 2) != 0 )
          {
            v24 = *(_QWORD **)(v22 + 16);
            if ( (*(_BYTE *)v24 & 2) != 0 )
              goto LABEL_59;
          }
          else
          {
            v30 = result;
            sub_206910(v23);
            v24 = *(_QWORD **)(v22 + 16);
            LODWORD(result) = v30;
            if ( (*(_BYTE *)v24 & 2) != 0 )
              goto LABEL_36;
          }
          v31 = result;
          sub_206910(v24);
          LODWORD(result) = v31;
LABEL_36:
          if ( (*(_BYTE *)v22 & 2) != 0 )
          {
LABEL_37:
            if ( v22 )
            {
              v32 = result;
              qfree();
              LODWORD(result) = v32;
            }
            goto LABEL_39;
          }
LABEL_59:
          if ( *(_QWORD *)(v22 + 40) )
          {
            *(_QWORD *)(v22 + 48) = 0;
            v41 = result;
            qfree();
            LODWORD(result) = v41;
          }
          v42 = result;
          cleanup_argloc();
          *(_QWORD *)v22 |= 2uLL;
          LODWORD(result) = v42;
          goto LABEL_37;
        }
      }
      else
      {
        v34 = result;
        sub_206910(v25);
        v26 = *(_QWORD **)(v21 + 16);
        LODWORD(result) = v34;
        if ( (*(_BYTE *)v26 & 2) != 0 )
          goto LABEL_46;
      }
      v35 = result;
      sub_206910(v26);
      LODWORD(result) = v35;
LABEL_46:
      if ( (*(_BYTE *)v21 & 2) != 0 )
        goto LABEL_47;
      goto LABEL_55;
    }
    return 0;
  }
  else
  {
    result = 0;
    if ( v47 )
    {
LABEL_24:
      v29 = result;
      qfree();
      return v29;
    }
  }
  return result;
}

