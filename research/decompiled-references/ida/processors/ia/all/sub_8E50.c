__int64 __fastcall sub_8E50(__int64 a1, _QWORD *a2, unsigned __int8 *a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v6; // rbp
  unsigned __int8 v7; // r12
  unsigned __int8 *v8; // r14
  unsigned __int8 v9; // kr00_1
  _QWORD *v10; // kr08_8
  unsigned __int8 *v11; // kr18_8
  unsigned __int8 *v12; // r14
  _QWORD *v13; // rbp
  unsigned __int8 v14; // r12
  __int64 v16; // r12
  char *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r12
  unsigned int v21; // ebx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 flags; // rax
  int v26; // r15d
  unsigned __int64 *fchunk; // rax
  int v28; // r13d
  int lookback; // eax
  int v30; // ecx
  unsigned __int8 *v31; // rax
  int v32; // esi
  char *v33; // rax
  int v34; // edx
  __int64 first_dref_from; // rax
  int v36; // edx
  __int16 v37; // ax
  __int64 v38; // [rsp+0h] [rbp-1C8h]
  __int64 qword; // [rsp+0h] [rbp-1C8h]
  unsigned __int64 v40; // [rsp+8h] [rbp-1C0h]
  int v41; // [rsp+1Ch] [rbp-1ACh]
  _QWORD v42[45]; // [rsp+20h] [rbp-1A8h] BYREF
  unsigned __int64 v43; // [rsp+188h] [rbp-40h]

  v43 = __readfsqword(0x28u);
  v9 = v7;
  v10 = v6;
  v11 = v8;
  v12 = a3;
  v13 = a2;
  v14 = a4;
  switch ( a3[1] )
  {
    case 1u:
    case 8u:
    case 9u:
    case 0xAu:
    case 0xBu:
    case 0xCu:
    case 0xDu:
      return v43 - __readfsqword(0x28u);
    case 3u:
      if ( *((_WORD *)a3 + 3) != 24 )
        return v43 - __readfsqword(0x28u);
      v26 = (char)a3[32];
      v40 = *(_QWORD *)getseg(a2[2]);
      fchunk = (unsigned __int64 *)get_fchunk(a2[2]);
      if ( fchunk )
        v40 = *fchunk;
      v28 = 0;
      qmemcpy(v42, a2, sizeof(v42));
      v38 = -1;
LABEL_17:
      lookback = get_lookback();
      if ( v38 != -1 )
        goto LABEL_40;
      if ( v28 >= lookback )
        goto LABEL_39;
      if ( v40 >= v42[2] || decode_prev_insn(v42) == -1 )
        return v43 - __readfsqword(0x28u);
      v30 = *(_DWORD *)(a1 + 140);
      if ( v30 <= 0 )
      {
        v38 = -1;
        v36 = 0;
      }
      else
      {
        v31 = *(unsigned __int8 **)(a1 + 128);
        v32 = *v31 - 97;
        if ( *v31 == 97 )
        {
          v32 = v31[1] - 100;
          if ( v31[1] == 100 )
            v32 = v31[2] - 100;
        }
        v33 = (char *)&v42[5] + 1;
        v34 = 0;
        while ( v32 )
        {
          ++v34;
          v33 += 40;
          if ( v34 == v30 )
          {
LABEL_33:
            v38 = -1;
LABEL_36:
            ++v28;
            goto LABEL_17;
          }
        }
        while ( 1 )
        {
          while ( *v33 != 1 )
          {
            ++v34;
            v33 += 40;
            if ( v30 == v34 )
              goto LABEL_33;
          }
          if ( *(unsigned __int16 *)(v33 + 5) == v26 )
            break;
          ++v34;
          v33 += 40;
          if ( v30 == v34 )
            goto LABEL_33;
        }
        v41 = v34;
        first_dref_from = get_first_dref_from(v42[2]);
        v30 = *(_DWORD *)(a1 + 140);
        v36 = v41;
        v38 = first_dref_from;
      }
      if ( v36 == v30 )
        goto LABEL_36;
LABEL_39:
      if ( v38 != -1 )
      {
LABEL_40:
        insn_create_op_data(v13, v38, (unsigned int)(char)v12[2], v12[5]);
        v37 = *((_WORD *)v13 + 12);
        if ( (v37 == 128 || v37 == 239) && (unsigned __int8)is_mapped(v38) && (unsigned __int8)segtype(v38) != 1 )
        {
          qword = get_qword(v38);
          insn_add_dref(v13, qword, (unsigned int)(char)v12[2], (unsigned int)v14 + 2);
        }
        else
        {
          insn_add_dref(v13, v38, (unsigned int)(char)v12[2], (unsigned int)v14 + 2);
        }
      }
      return v43 - __readfsqword(0x28u);
    case 5u:
      if ( (_BYTE)a4 )
      {
        set_immd(a2[2]);
        v21 = *v12;
        flags = get_flags_ex(a2[2], 0, v22, v23, v24);
        if ( !(unsigned __int8)op_adds_xrefs(flags, v21) )
          return v43 - __readfsqword(0x28u);
        return insn_add_off_drefs(a2, v12, 1, 0);
      }
      else
      {
        if ( under_debugger )
LABEL_49:
          BUG();
        interr(10106, a2, a3, a4, a5, a6);
        return sub_9240();
      }
    case 7u:
      v16 = *a2;
      v17 = strstr(*(const char **)(a1 + 128), ".call");
      v19 = 19;
      v20 = *((_QWORD *)v12 + 2) + 16 * v16;
      if ( v17 )
      {
        if ( ((*(_BYTE *)(a1 + 180) & 0x20) != 0 || (*(_BYTE *)(a1 + 8LL * *(int *)(a1 + 208) + 184) & 0x3F) == 0)
          && !(unsigned __int8)func_does_return(v20, ".call", v18, 19) )
        {
          *(_DWORD *)(a1 + 5232) = 0;
        }
        v19 = 17;
      }
      return insn_add_cref(a2, v20, (unsigned int)(char)v12[2], v19);
    default:
      v12 = v11;
      v13 = v10;
      v14 = v9;
      if ( under_debugger )
        goto LABEL_49;
      interr(10370, a2, a3, a4, a5, a6);
      goto LABEL_39;
  }
}

