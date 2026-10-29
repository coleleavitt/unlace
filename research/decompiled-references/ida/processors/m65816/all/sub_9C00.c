__int64 __fastcall sub_9C00(__int64 *a1, __int64 a2, __int64 a3, int a4, int a5, int a6, double a7, double a8)
{
  __int64 result; // rax
  unsigned __int8 v11; // al
  int v12; // eax
  __int64 v13; // rax
  unsigned int v14; // eax
  __int64 *v15; // rdx
  unsigned int v16; // eax
  __int64 *v17; // rdx
  unsigned int v18; // eax
  __int64 *v19; // rdx
  unsigned int v20; // eax
  __int64 *v21; // rdx
  unsigned int v22; // eax
  __int64 *v23; // rdx
  unsigned __int8 v24; // al
  unsigned int v25; // edx
  __int64 v26; // rax
  __int64 v27; // rbp
  unsigned __int8 v28; // al
  __int64 v29; // rax
  const void *v30; // r12
  size_t v31; // rax
  size_t v32; // rbx
  unsigned int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rsi
  __int64 v36; // rdi
  __int64 v37; // rcx
  char v38; // si
  const char **v39; // rdx
  unsigned int v40; // eax
  __int64 *v41; // rdx
  unsigned int v42; // edx
  __int64 v43; // rax
  _QWORD *v44; // rsi
  unsigned __int8 byte; // al
  const __m128i *v46; // rdx
  __m128i *v47; // rax
  bool v48; // cc
  unsigned int v49; // eax
  _QWORD **v50; // rdx
  _QWORD *v51; // rbx
  __int64 v52; // rcx
  int v53; // eax
  __int64 v54; // rdx
  unsigned __int8 v55; // al
  char *v56; // rax
  int v57; // edx
  unsigned int v58; // edx
  __int64 v59; // rax
  __int64 v60; // rcx
  _QWORD *v61; // rdi
  __int64 *v62; // rax
  unsigned int v63; // eax
  _QWORD *v64; // rdx
  const char *v65; // rsi
  _BYTE *v66; // rax
  size_t v67; // r12
  char *v68; // r13
  __int64 *v69; // rbx
  unsigned __int64 v70; // r14
  unsigned __int64 v71; // rax
  _QWORD *v72; // rdx
  _BYTE *v73; // rax
  __int64 *v74; // rdx
  _QWORD *v75; // rax
  _QWORD **v76; // rdx
  _QWORD **v77; // rax
  _QWORD **v78; // rdx
  void *v79; // rdi
  size_t v80; // r13
  __int64 v81; // rax

  switch ( a2 )
  {
    case 0LL:
      hook_event_listener();
      goto LABEL_3;
    case 1LL:
      unhook_event_listener();
      clr_module_data();
      return 1;
    case 2LL:
      return 1;
    case 4LL:
      sub_82A0(a1[31]);
      v46 = (const __m128i *)a1[31];
      v47 = (__m128i *)a1[32];
      *v47 = _mm_loadu_si128(v46);
      v47[1] = _mm_loadu_si128(v46 + 1);
      v48 = v47[1].m128i_i32[2] <= 6u;
      v47[2] = _mm_loadu_si128(v46 + 2);
      if ( !v48 )
      {
        switch ( *(_DWORD *)(a1[31] + 24) )
        {
          case 0:
            v65 = "LoROM";
            break;
          case 1:
            v65 = "HiROM";
            break;
          case 2:
            v65 = "ExLoROM";
            break;
          case 3:
            v65 = "ExHiROM";
            break;
          case 4:
            v65 = "SuperFXROM";
            break;
          case 5:
            v65 = "SA1ROM";
            break;
          case 6:
            v65 = "SPC7110ROM";
            break;
          case 7:
            v65 = "BSCLoROM";
            break;
          case 8:
            v65 = "BSCHiROM";
            break;
          case 9:
            v65 = "BSXROM";
            break;
          case 0xA:
            v65 = "STROM";
            break;
          default:
            v65 = nullptr;
            break;
        }
        sub_4860((__int64)"Unsupported mapper: %s", v65);
      }
      v66 = (_BYTE *)a1[31];
      if ( v66[33] )
      {
        v67 = 7;
        v68 = "superfx";
LABEL_91:
        v69 = a1 + 16;
        v70 = v67 + 1;
LABEL_92:
        if ( v69[3] < v70 )
          v69[1] = qvector_reserve();
        v69[2] = v70;
        memmove((void *)v69[1], v68, v67);
        *(_BYTE *)(v69[1] + v67) = 0;
        goto LABEL_95;
      }
      if ( v66[34] )
      {
        v67 = 3;
        v68 = "sa1";
        goto LABEL_91;
      }
      if ( v66[39] )
      {
        v67 = 3;
        v68 = "cx4";
        goto LABEL_91;
      }
      if ( v66[38] )
      {
        v67 = 7;
        v68 = "spc7110";
        goto LABEL_91;
      }
      if ( v66[37] )
      {
        v67 = 4;
        v68 = "sdd1";
        goto LABEL_91;
      }
      if ( v66[35] )
      {
        v67 = 8;
        v68 = "sharprtc";
        goto LABEL_91;
      }
      if ( v66[36] )
      {
        v67 = 8;
        v68 = "epsonrtc";
        goto LABEL_91;
      }
      if ( v66[44] )
      {
        v67 = 4;
        v68 = "obc1";
        goto LABEL_91;
      }
      if ( v66[40] )
      {
        v67 = 4;
        v68 = "dsp1";
        goto LABEL_91;
      }
      if ( v66[41] )
      {
        v67 = 4;
        v68 = "dsp2";
        goto LABEL_91;
      }
      if ( v66[42] )
      {
        v67 = 4;
        v68 = "dsp3";
        goto LABEL_91;
      }
      if ( v66[43] )
      {
        v67 = 4;
        v68 = "dsp4";
        goto LABEL_91;
      }
      if ( v66[45] )
      {
        v67 = 5;
        v68 = "st010";
        goto LABEL_91;
      }
      if ( v66[46] )
      {
        v67 = 5;
        v68 = "st011";
        goto LABEL_91;
      }
      if ( v66[47] )
      {
        v67 = 5;
        v68 = "st018";
        goto LABEL_91;
      }
      if ( netnode_qhashstr() <= 0 )
      {
        v69 = a1 + 16;
        v70 = 6;
        v68 = "65816";
        v67 = 5;
        goto LABEL_92;
      }
      v69 = a1 + 16;
      if ( &dword_D9CC )
      {
        a1[18] = 0;
LABEL_95:
        netnode_supset();
        sub_78B0(v69, 7);
      }
      set_default_sreg_value();
      set_default_sreg_value();
      set_default_sreg_value();
      set_default_sreg_value();
      if ( getinf() != -1 )
      {
        v71 = getinf();
        sub_9030(a1[32], v71);
        getseg();
        get_sreg();
        split_sreg_range();
        get_sreg();
        split_sreg_range();
        get_sreg();
        split_sreg_range();
        split_sreg_range();
        split_sreg_range();
        get_sreg();
        split_sreg_range();
      }
      return 1;
    case 5LL:
    case 86LL:
      sub_9A70(a1);
      if ( a2 == 5 )
      {
        v13 = netnode_hashval_long();
        if ( v13 )
        {
          if ( v13 == 32 )
          {
            *(_DWORD *)(a1[31] + 24) = 0;
          }
          else if ( v13 == 33 )
          {
            *(_DWORD *)(a1[31] + 24) = 1;
          }
          netnode_hashdel();
          sub_8A90();
        }
      }
      return 1;
    case 10LL:
      v22 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v23 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v23 + 1;
      }
      else
      {
        v23 = (__int64 *)(*(_QWORD *)(a3 + 16) + v22);
        *(_DWORD *)a3 = v22 + 8;
      }
      return (int)sub_4950(*v23, a7, a8);
    case 11LL:
      v18 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v19 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v19 + 1;
      }
      else
      {
        v19 = (__int64 *)(*(_QWORD *)(a3 + 16) + v18);
        *(_DWORD *)a3 = v18 + 8;
      }
      if ( !(unsigned int)sub_51F0((__int64)a1, *v19) )
        return -1;
      return 1;
    case 12LL:
      v16 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v17 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v17 + 1;
      }
      else
      {
        v17 = (__int64 *)(*(_QWORD *)(a3 + 16) + v16);
        *(_DWORD *)a3 = v16 + 8;
      }
      sub_6F90((__int64)a1, *v17);
      return 1;
    case 13LL:
      v20 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v21 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v21 + 1;
      }
      else
      {
        v21 = (__int64 *)(*(_QWORD *)(a3 + 16) + v20);
        *(_DWORD *)a3 = v20 + 8;
      }
      sub_7300((__int64)a1, *v21);
      return 1;
    case 14LL:
      v42 = *(_DWORD *)a3;
      if ( v42 > 0x2F )
      {
        v76 = *(_QWORD ***)(a3 + 8);
        v77 = v76 + 1;
        *(_QWORD *)(a3 + 8) = v76 + 1;
        v44 = *v76;
      }
      else
      {
        v43 = *(_QWORD *)(a3 + 16);
        *(_DWORD *)a3 = v42 + 8;
        v44 = *(_QWORD **)(v43 + v42);
        if ( v42 + 8 <= 0x2F )
        {
          *(_DWORD *)a3 = v42 + 16;
          goto LABEL_63;
        }
        v77 = *(_QWORD ***)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v77 + 1;
LABEL_63:
      sub_70F0((__int64)a1, v44);
      return 1;
    case 16LL:
      v40 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v41 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v41 + 1;
      }
      else
      {
        v41 = (__int64 *)(*(_QWORD *)(a3 + 16) + v40);
        *(_DWORD *)a3 = v40 + 8;
      }
      sub_6BA0((__int64)a1, *v41);
      return 1;
    case 17LL:
      v14 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v15 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v15 + 1;
      }
      else
      {
        v15 = (__int64 *)(*(_QWORD *)(a3 + 16) + v14);
        *(_DWORD *)a3 = v14 + 8;
      }
      sub_6F80(*v15);
      return 1;
    case 19LL:
      v58 = *(_DWORD *)a3;
      if ( v58 > 0x2F )
      {
        v78 = *(_QWORD ***)(a3 + 8);
        v62 = (__int64 *)(v78 + 1);
        *(_QWORD *)(a3 + 8) = v78 + 1;
        v61 = *v78;
      }
      else
      {
        v59 = *(_QWORD *)(a3 + 16);
        v60 = v58 + 8;
        *(_DWORD *)a3 = v60;
        v61 = *(_QWORD **)(v59 + v58);
        if ( (unsigned int)v60 <= 0x2F )
        {
          v62 = (__int64 *)(v60 + v59);
          *(_DWORD *)a3 = v58 + 16;
          goto LABEL_82;
        }
        v62 = *(__int64 **)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v62 + 1;
LABEL_82:
      if ( (unsigned __int8)sub_6B90(v61, *v62, a7) )
        return 1;
      return -1;
    case 25LL:
      v49 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v50 = *(_QWORD ***)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v50 + 1;
      }
      else
      {
        v50 = (_QWORD **)(*(_QWORD *)(a3 + 16) + v49);
        *(_DWORD *)a3 = v49 + 8;
      }
      v51 = *v50;
      v52 = sub_9030(a1[32], 0);
      v53 = 6 - *(_DWORD *)(a1[2] + 68);
      if ( (*v51 & 0xFF0000LL) == v52 )
      {
        v51[v53 + 7] = 0;
        v51[11 - *(_DWORD *)(a1[2] + 68) + 7] = 0;
      }
      else
      {
        v54 = (unsigned __int8)BYTE2(*v51);
        v51[v53 + 7] = v54;
        v51[11 - *(_DWORD *)(a1[2] + 68) + 7] = v54;
      }
      return 1;
    case 34LL:
      if ( *(_DWORD *)a3 > 0x2Fu )
        *(_QWORD *)(a3 + 8) += 8LL;
      else
        *(_DWORD *)a3 += 8;
      byte = get_byte();
      if ( (unsigned int)(*(_DWORD *)sub_4930(byte) - 33) <= 1 )
        return 1;
      return -1;
    case 35LL:
      if ( *(_DWORD *)a3 > 0x2Fu )
        *(_QWORD *)(a3 + 8) += 8LL;
      else
        *(_DWORD *)a3 += 8;
      v24 = get_byte();
      if ( (unsigned int)(*(_DWORD *)sub_4930(v24) - 62) > 2 )
        return -1;
      return 1;
    case 36LL:
      if ( *(_DWORD *)a3 > 0x2Fu )
        *(_QWORD *)(a3 + 8) += 8LL;
      else
        *(_DWORD *)a3 += 8;
      if ( get_first_cref_to() == -1 )
        return 0;
      while ( 1 )
      {
        v11 = get_byte();
        v12 = *(_DWORD *)sub_4930(v11);
        if ( (unsigned int)(v12 - 33) <= 1 || v12 == 31 )
          break;
        if ( get_next_cref_to() == -1 )
          return 0;
      }
      return 100;
    case 38LL:
      if ( *(_DWORD *)a3 > 0x2Fu )
        *(_QWORD *)(a3 + 8) += 8LL;
      else
        *(_DWORD *)a3 += 8;
      v55 = get_byte();
      v56 = sub_4930(v55);
      if ( (unsigned int)(*(_DWORD *)v56 - 31) > 1 )
        return 0;
      v57 = *((_DWORD *)v56 + 1);
      result = 2;
      if ( (unsigned int)(v57 - 3) > 2 )
        return 1;
      return result;
    case 53LL:
      v25 = *(_DWORD *)a3;
      if ( v25 > 0x2F )
      {
        v74 = *(__int64 **)(a3 + 8);
        v75 = v74 + 1;
        *(_QWORD *)(a3 + 8) = v74 + 1;
        v27 = *v74;
      }
      else
      {
        v26 = *(_QWORD *)(a3 + 16);
        *(_DWORD *)a3 = v25 + 8;
        v27 = *(_QWORD *)(v26 + v25);
        if ( v25 + 8 <= 0x2F )
        {
          *(_DWORD *)a3 = v25 + 16;
          goto LABEL_45;
        }
        v75 = *(_QWORD **)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v75 + 1;
LABEL_45:
      v28 = get_byte();
      v29 = *((int *)sub_4930(v28) + 1);
      if ( *((_BYTE *)&qword_DC40 + v29) )
      {
        v30 = *(&off_104C0 + v29);
        if ( v30 && (v31 = strlen((const char *)*(&off_104C0 + v29)), (v32 = v31) != 0) )
        {
          v79 = *(void **)v27;
          v80 = v31 + 1;
          if ( *(_QWORD *)(v27 + 16) < v31 + 1 )
          {
            v81 = qvector_reserve();
            *(_QWORD *)v27 = v81;
            v79 = (void *)v81;
          }
          *(_QWORD *)(v27 + 8) = v80;
          memmove(v79, v30, v32);
          *(_BYTE *)(*(_QWORD *)v27 + v32) = 0;
        }
        else
        {
          *(_QWORD *)(v27 + 8) = 0;
        }
      }
      return 1;
    case 94LL:
      v63 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v64 = *(_QWORD **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v64 + 1;
      }
      else
      {
        v64 = (_QWORD *)(*(_QWORD *)(a3 + 16) + v63);
        *(_DWORD *)a3 = v63 + 8;
      }
      sub_BD40(*v64, a2, (_DWORD)v64, a4, a5, a6);
      return 1;
    case 95LL:
LABEL_3:
      netnode_check();
      return 1;
    case 96LL:
      if ( !(_BYTE)byte_123A8 && __cxa_guard_acquire(&byte_123A8) )
      {
        qword_12370 = a1[15];
        __cxa_guard_release(&byte_123A8);
      }
      return (int)cvt64_node_supval_for_event();
    case 97LL:
      v33 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v72 = *(_QWORD **)(a3 + 8);
        v73 = v72 + 1;
        *(_QWORD *)(a3 + 8) = v72 + 1;
        v36 = *v72;
LABEL_128:
        v39 = (const char **)(v73 + 8);
        *(_QWORD *)(a3 + 8) = v73 + 8;
        v38 = *v73;
        goto LABEL_129;
      }
      v34 = *(_QWORD *)(a3 + 16);
      v35 = v33 + 8;
      *(_DWORD *)a3 = v35;
      v36 = *(_QWORD *)(v34 + v33);
      if ( (unsigned int)v35 > 0x2F )
      {
        v73 = *(_BYTE **)(a3 + 8);
        goto LABEL_128;
      }
      v37 = v33 + 16;
      *(_DWORD *)a3 = v37;
      v38 = *(_BYTE *)(v34 + v35);
      if ( (unsigned int)v37 <= 0x2F )
      {
        v39 = (const char **)(v37 + v34);
        *(_DWORD *)a3 = v33 + 24;
        goto LABEL_53;
      }
      v39 = *(const char ***)(a3 + 8);
LABEL_129:
      *(_QWORD *)(a3 + 8) = v39 + 1;
LABEL_53:
      if ( a1[15] == v36 && v38 == 72 && !strcmp(*v39, "rom_size") )
      {
        sub_82A0(a1[31]);
        sub_8A90();
      }
      return 1;
    default:
      return 0;
  }
}

