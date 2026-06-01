__int64 __fastcall sub_61F0(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6, double a7, double a8)
{
  __int64 result; // rax
  unsigned int v10; // eax
  __int64 *v11; // rdx
  unsigned int v12; // eax
  __int64 v13; // rdx
  unsigned __int8 byte; // al
  __int64 *v15; // rdx
  unsigned int v16; // eax
  _QWORD *v17; // rdx
  unsigned int v18; // eax
  __int64 v19; // rdx
  __int64 *v20; // r13
  size_t v21; // rax
  size_t v22; // r12
  unsigned __int8 v23; // al
  int v24; // eax
  unsigned int v25; // eax
  __int64 v26; // rdx
  unsigned int v27; // eax
  __int64 *v28; // rdx
  unsigned int v29; // eax
  __int64 *v30; // rdx
  unsigned int v31; // edx
  __int64 v32; // rax
  _QWORD *v33; // rsi
  unsigned int v34; // edx
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 *v37; // rdi
  __int64 *v38; // rax
  unsigned int v39; // eax
  __int64 *v40; // rdx
  unsigned int v41; // eax
  __int64 *v42; // rdx
  unsigned int v43; // eax
  __int64 *v44; // rdx
  _QWORD **v45; // rdx
  _QWORD **v46; // rax
  __int64 **v47; // rdx
  unsigned __int64 v48; // r14
  __int64 v49; // [rsp+0h] [rbp-438h] BYREF
  int v50; // [rsp+8h] [rbp-430h]
  int v51; // [rsp+10h] [rbp-428h]
  int v52; // [rsp+18h] [rbp-420h]
  __int64 v53; // [rsp+20h] [rbp-418h]
  __int64 v54; // [rsp+28h] [rbp-410h]
  int v55; // [rsp+30h] [rbp-408h]
  int v56; // [rsp+38h] [rbp-400h]
  int v57; // [rsp+40h] [rbp-3F8h]
  int v58; // [rsp+48h] [rbp-3F0h]
  __int64 v59; // [rsp+50h] [rbp-3E8h]
  unsigned __int64 v60; // [rsp+408h] [rbp-30h]

  v60 = __readfsqword(0x28u);
  switch ( a2 )
  {
    case 0LL:
    case 95LL:
      netnode_check();
      return 0;
    case 1LL:
      clr_module_data();
      return 0;
    case 4LL:
      v20 = &v49;
      if ( netnode_hashstr() <= 0 )
      {
        v48 = 7;
        v22 = 6;
        v20 = (__int64 *)"spc700";
      }
      else
      {
        v21 = strlen((const char *)&v49);
        v22 = v21;
        if ( !v21 )
        {
          *(_QWORD *)(a1 + 144) = 0;
          goto LABEL_25;
        }
        v48 = v21 + 1;
      }
      if ( *(_QWORD *)(a1 + 152) < v48 )
        *(_QWORD *)(a1 + 136) = qvector_reserve();
      *(_QWORD *)(a1 + 144) = v48;
      memmove(*(void **)(a1 + 136), v20, v22);
      *(_BYTE *)(*(_QWORD *)(a1 + 136) + v22) = 0;
LABEL_25:
      netnode_supset();
      sub_56F0((__int64 *)(a1 + 128), 7);
      sub_6130(a1);
      set_default_sreg_value();
      set_default_sreg_value();
      return 0;
    case 5LL:
    case 86LL:
      if ( netnode_qsupstr() > 0 )
        sub_56F0((__int64 *)(a1 + 128), 0);
      return 0;
    case 10LL:
      v10 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v11 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v11 + 1;
      }
      else
      {
        v11 = (__int64 *)(*(_QWORD *)(a3 + 16) + v10);
        *(_DWORD *)a3 = v10 + 8;
      }
      return (int)sub_38E0(*v11, a7, a8);
    case 11LL:
      v43 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v44 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v44 + 1;
      }
      else
      {
        v44 = (__int64 *)(*(_QWORD *)(a3 + 16) + v43);
        *(_DWORD *)a3 = v43 + 8;
      }
      if ( !(unsigned int)sub_4100(a1, *v44) )
        return -1;
      return 1;
    case 12LL:
      v27 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v28 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v28 + 1;
      }
      else
      {
        v28 = (__int64 *)(*(_QWORD *)(a3 + 16) + v27);
        *(_DWORD *)a3 = v27 + 8;
      }
      sub_4D10(a1, *v28);
      return 1;
    case 13LL:
      v39 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v40 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v40 + 1;
      }
      else
      {
        v40 = (__int64 *)(*(_QWORD *)(a3 + 16) + v39);
        *(_DWORD *)a3 = v39 + 8;
      }
      sub_5080(a1, *v40);
      return 1;
    case 14LL:
      v31 = *(_DWORD *)a3;
      if ( v31 > 0x2F )
      {
        v45 = *(_QWORD ***)(a3 + 8);
        v46 = v45 + 1;
        *(_QWORD *)(a3 + 8) = v45 + 1;
        v33 = *v45;
      }
      else
      {
        v32 = *(_QWORD *)(a3 + 16);
        *(_DWORD *)a3 = v31 + 8;
        v33 = *(_QWORD **)(v32 + v31);
        if ( v31 + 8 <= 0x2F )
        {
          *(_DWORD *)a3 = v31 + 16;
          goto LABEL_46;
        }
        v46 = *(_QWORD ***)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v46 + 1;
LABEL_46:
      sub_4E70(a1, v33);
      return 1;
    case 16LL:
      v41 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v42 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v42 + 1;
      }
      else
      {
        v42 = (__int64 *)(*(_QWORD *)(a3 + 16) + v41);
        *(_DWORD *)a3 = v41 + 8;
      }
      sub_49C0(a1, *v42);
      return 1;
    case 17LL:
      v29 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v30 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v30 + 1;
      }
      else
      {
        v30 = (__int64 *)(*(_QWORD *)(a3 + 16) + v29);
        *(_DWORD *)a3 = v29 + 8;
      }
      sub_4D00(*v30);
      return 1;
    case 19LL:
      v34 = *(_DWORD *)a3;
      if ( v34 > 0x2F )
      {
        v47 = *(__int64 ***)(a3 + 8);
        v38 = (__int64 *)(v47 + 1);
        *(_QWORD *)(a3 + 8) = v47 + 1;
        v37 = *v47;
      }
      else
      {
        v35 = *(_QWORD *)(a3 + 16);
        v36 = v34 + 8;
        *(_DWORD *)a3 = v36;
        v37 = *(__int64 **)(v35 + v34);
        if ( (unsigned int)v36 <= 0x2F )
        {
          v38 = (__int64 *)(v36 + v35);
          *(_DWORD *)a3 = v34 + 16;
          goto LABEL_50;
        }
        v38 = *(__int64 **)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v38 + 1;
LABEL_50:
      if ( (unsigned __int8)sub_49B0(v37, *v38, a7) )
        return 1;
      else
        return -1;
    case 34LL:
      v18 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v19 = *(_QWORD *)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v19 + 8;
      }
      else
      {
        v19 = *(_QWORD *)(a3 + 16) + v18;
        *(_DWORD *)a3 = v18 + 8;
      }
      if ( *(_WORD *)(*(_QWORD *)v19 + 24LL) != 31 )
        return -1;
      return 1;
    case 35LL:
      v25 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v26 = *(_QWORD *)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v26 + 8;
      }
      else
      {
        v26 = *(_QWORD *)(a3 + 16) + v25;
        *(_DWORD *)a3 = v25 + 8;
      }
      if ( (unsigned __int16)(*(_WORD *)(*(_QWORD *)v26 + 24LL) - 87) <= 1u )
        return 1;
      return -1;
    case 36LL:
      if ( *(_DWORD *)a3 > 0x2Fu )
        *(_QWORD *)(a3 + 8) += 8LL;
      else
        *(_DWORD *)a3 += 8;
      if ( get_first_cref_to() == -1 )
        return 0;
      break;
    case 38LL:
      v12 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v13 = *(_QWORD *)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v13 + 8;
      }
      else
      {
        v13 = *(_QWORD *)(a3 + 16) + v12;
        *(_DWORD *)a3 = v12 + 8;
      }
      if ( *(_WORD *)(*(_QWORD *)v13 + 24LL) != 64 )
        return 0;
      byte = get_byte();
      v15 = sub_38C0(byte);
      result = 2;
      if ( *((_DWORD *)v15 + 1) != 3 )
        return 1;
      return result;
    case 94LL:
      v16 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v17 = *(_QWORD **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v17 + 1;
      }
      else
      {
        v17 = (_QWORD *)(*(_QWORD *)(a3 + 16) + v16);
        *(_DWORD *)a3 = v16 + 8;
      }
      sub_75D0(*v17, a2, (_DWORD)v17, a4, a5, a6, v49, v50, v51, v52, v53, v54, v55, v56, v57, v58, v59);
      return 0;
    case 96LL:
      if ( !(_BYTE)byte_C388 && __cxa_guard_acquire(&byte_C388) )
      {
        qword_C350 = *(_QWORD *)(a1 + 120);
        __cxa_guard_release(&byte_C388);
      }
      return (int)cvt64_node_supval_for_event();
    default:
      return 0;
  }
  while ( 1 )
  {
    v23 = get_byte();
    v24 = *(_DWORD *)sub_38C0(v23);
    if ( v24 == 31 || v24 == 64 )
      break;
    if ( get_next_cref_to() == -1 )
      return 0;
  }
  return 100;
}

