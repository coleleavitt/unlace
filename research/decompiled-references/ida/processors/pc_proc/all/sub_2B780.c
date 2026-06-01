__int64 __fastcall sub_2B780(__int64 a1, __int64 a2)
{
  __int16 v2; // ax
  __int64 v3; // r13
  __int64 v7; // rdx
  unsigned __int16 v8; // r15
  unsigned __int64 *v9; // rax
  unsigned __int8 v10; // r9
  __int64 *v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // r10
  __int64 *v14; // rdx
  __int64 *v15; // rax
  unsigned __int8 v16; // r9
  __int64 *v17; // rsi
  __int64 v18; // rcx
  __int64 *v19; // rdx
  __int64 *v20; // rax
  __int64 insn; // rax
  unsigned __int8 v22; // r9
  __int16 v23; // ax
  int v24; // eax
  __int64 v25; // rdx
  char v26; // al
  __int64 v27; // rdx
  char v28; // al
  __int64 v29; // r12
  unsigned __int64 v30; // rax
  __int64 v31; // rsi
  unsigned __int64 v32; // r13
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // [rsp+8h] [rbp-1F0h]
  unsigned __int8 v41; // [rsp+8h] [rbp-1F0h]
  unsigned __int8 v42; // [rsp+8h] [rbp-1F0h]
  unsigned __int8 v43; // [rsp+8h] [rbp-1F0h]
  unsigned __int8 v44; // [rsp+8h] [rbp-1F0h]
  unsigned __int8 v45; // [rsp+18h] [rbp-1E0h]
  unsigned __int8 v46; // [rsp+20h] [rbp-1D8h]
  unsigned __int8 v47; // [rsp+20h] [rbp-1D8h]
  unsigned __int8 v48; // [rsp+20h] [rbp-1D8h]
  __int64 v49; // [rsp+20h] [rbp-1D8h]
  __int16 v50; // [rsp+2Ch] [rbp-1CCh]
  unsigned __int8 v51; // [rsp+2Fh] [rbp-1C9h]
  __int128 v52; // [rsp+50h] [rbp-1A8h] BYREF
  __int64 v53; // [rsp+60h] [rbp-198h]
  __int64 v54; // [rsp+68h] [rbp-190h]
  __int64 v55; // [rsp+70h] [rbp-188h]
  char v56; // [rsp+78h] [rbp-180h] BYREF
  char v57; // [rsp+79h] [rbp-17Fh]
  __int16 v58; // [rsp+7Eh] [rbp-17Ah]
  char v59; // [rsp+A1h] [rbp-157h]
  __int16 v60; // [rsp+A6h] [rbp-152h]
  unsigned __int64 v61; // [rsp+1B8h] [rbp-40h] BYREF

  v2 = *(_WORD *)(a2 + 24);
  v3 = *(_QWORD *)(a1 + 144);
  v61 = __readfsqword(0x28u);
  if ( v2 == 143 )
  {
    if ( *(_BYTE *)(a2 + 41) != 1 || (*(_BYTE *)(a2 + 28) & 8) == 0 )
      return 0;
    goto LABEL_47;
  }
  if ( v2 != 122 )
    return 0;
  v7 = 0xFFFFFFFFLL;
  if ( *(_QWORD *)(a1 + 32) != -1 )
    v7 = 5;
  if ( !(unsigned __int8)sub_26F10(a2, a2 + 40, v7) || *(_BYTE *)(a2 + 81) != 1 )
    return 0;
  v50 = *(_WORD *)(a2 + 24);
  if ( v50 == 143 )
  {
LABEL_47:
    v8 = *(_WORD *)(a2 + 46);
    v40 = -1;
    v50 = 143;
    goto LABEL_11;
  }
  v8 = *(_WORD *)(a2 + 86);
  v40 = *(_QWORD *)(a2 + 16);
LABEL_11:
  v9 = (unsigned __int64 *)&v56;
  v53 = -1;
  v54 = 0;
  v55 = 0;
  v52 = -1;
  do
  {
    *(_WORD *)v9 = 0;
    v9 += 5;
    *((_WORD *)v9 - 19) = 0;
    *((_WORD *)v9 - 18) = 0;
    *((_DWORD *)v9 - 2) = 0;
    *((_WORD *)v9 - 17) = 0;
    *((_OWORD *)v9 - 2) = 0;
    *(v9 - 2) = 0;
  }
  while ( &v61 != v9 );
  do
  {
    if ( decode_prev_insn() == -1 )
      break;
    v10 = sub_6C050(*(_QWORD *)(a1 + 152), v53, 0.0);
    if ( !v10 )
      break;
    if ( (_WORD)v54 == 216 )
    {
      if ( v57 == 1 && v58 == v8 && v60 != v8 && v59 == 1 && (v60 == 4 || v60 == 5 && *(_QWORD *)(a1 + 32) != -1) )
        goto LABEL_28;
    }
    else if ( (_WORD)v54 == 122 )
    {
      if ( v59 != 1 || v60 != v8 )
        goto LABEL_16;
      v25 = 0xFFFFFFFFLL;
      if ( *(_QWORD *)(a1 + 32) != -1 )
        v25 = 5;
      v45 = v10;
      v26 = sub_26F10((__int64)&v52, (__int64)&v56, v25);
      v10 = v45;
      if ( v26 )
      {
        if ( v40 != -1 )
          break;
        v40 = v53;
      }
      if ( (_WORD)v54 == 122 )
      {
LABEL_16:
        if ( v57 == 1 && v58 == v8 && v59 == 2 )
        {
          v48 = v10;
          if ( get_ea_name() > 0 )
          {
            v24 = strcmp(nullptr, "security_cookie");
            v10 = v48;
            if ( !v24 )
            {
LABEL_28:
              v11 = *(__int64 **)(a1 + 48);
              v12 = *(_QWORD *)(a1 + 56);
              v13 = v53;
              v14 = &v11[v12];
              v15 = v11;
              if ( v11 == v14 )
                goto LABEL_61;
              while ( v53 != *v15 )
              {
                if ( v14 == ++v15 )
                  goto LABEL_61;
              }
              if ( v14 == v15 )
              {
LABEL_61:
                if ( *(_QWORD *)(a1 + 64) < (unsigned __int64)(v12 + 1) )
                {
                  v51 = v10;
                  v49 = v53;
                  v35 = qvector_reserve();
                  v36 = *(_QWORD *)(a1 + 56);
                  v10 = v51;
                  *(_QWORD *)(a1 + 48) = v35;
                  v13 = v49;
                  v14 = (__int64 *)(v35 + 8 * v36);
                }
                *v14 = v13;
                ++*(_QWORD *)(a1 + 56);
              }
              v46 = v10;
              netnode_supset();
              v16 = v46;
              if ( v40 != -1 )
              {
                v17 = *(__int64 **)(a1 + 48);
                v18 = *(_QWORD *)(a1 + 56);
                v19 = &v17[v18];
                if ( v17 == v19 )
                  goto LABEL_64;
                v20 = *(__int64 **)(a1 + 48);
                while ( *v20 != v40 )
                {
                  if ( v19 == ++v20 )
                    goto LABEL_64;
                }
                if ( v19 == v20 )
                {
LABEL_64:
                  if ( *(_QWORD *)(a1 + 64) < (unsigned __int64)(v18 + 1) )
                  {
                    v37 = qvector_reserve();
                    v38 = *(_QWORD *)(a1 + 56);
                    v16 = v46;
                    *(_QWORD *)(a1 + 48) = v37;
                    v19 = (__int64 *)(v37 + 8 * v38);
                  }
                  *v19 = v40;
                  ++*(_QWORD *)(a1 + 56);
                }
                v47 = v16;
                netnode_supset();
                v16 = v47;
              }
              v41 = v16;
              netnode_supset();
              insn = decode_prev_insn();
              v22 = v41;
              if ( insn != -1 )
              {
                v23 = v54;
                if ( (_WORD)v54 == 216 )
                {
                  v27 = 0xFFFFFFFFLL;
                  if ( *(_QWORD *)(a1 + 32) != -1 )
                    v27 = 5;
                  v28 = sub_26F10((__int64)&v52, (__int64)&v56, v27);
                  v22 = v41;
                  if ( v28 && v59 == 1 && v60 == v8 )
                  {
                    sub_226A0((__int64 *)(a1 + 48), v53);
                    sub_236C0();
                    decode_prev_insn();
                    v23 = v54;
                    v22 = v41;
                  }
                  else
                  {
                    v23 = v54;
                  }
                }
                if ( v23 == 122 && v57 == 1 && v58 == v8 && v59 == 2 )
                {
                  v43 = v22;
                  sub_226A0((__int64 *)(a1 + 48), v53);
                  sub_236C0();
                  v22 = v43;
                }
              }
              if ( v50 == 143 )
              {
                v29 = *(_QWORD *)(a2 + 16);
                v30 = sub_23F00(a1);
                v31 = *(_QWORD *)(a1 + 8);
                v32 = v30;
                v33 = *(_QWORD *)(a1 + 16);
                if ( *(_QWORD *)(a1 + 24) < (unsigned __int64)(v33 + 1) )
                {
                  v44 = v22;
                  v39 = qvector_reserve();
                  v22 = v44;
                  *(_QWORD *)(a1 + 8) = v39;
                  v31 = v39;
                  v33 = *(_QWORD *)(a1 + 16);
                }
                v34 = v31 + 32 * v33;
                *(_QWORD *)v34 = v29;
                *(_QWORD *)(v34 + 8) = v32;
                *(_QWORD *)(v34 + 16) = 4;
                *(_DWORD *)(v34 + 24) = 0xFFFF;
                ++*(_QWORD *)(a1 + 16);
              }
              v42 = v22;
              decode_insn();
              *(_DWORD *)a1 |= 4u;
              return v42;
            }
          }
        }
      }
    }
  }
  while ( !(unsigned __int8)sub_679F0(v3, &v52, v8, 0.0) );
  return 0;
}

