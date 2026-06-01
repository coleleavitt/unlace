__int64 __fastcall sub_46800(__int64 a1, __int64 a2, double a3, __int64 a4, unsigned int a5, char a6, __int64 a7)
{
  __int64 flags; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v18; // rdi
  unsigned __int16 *module_data; // rax
  __int64 v20; // rdx
  __int64 v21; // [rsp+0h] [rbp-58h] BYREF
  __int64 v22; // [rsp+8h] [rbp-50h]
  __int64 v23; // [rsp+10h] [rbp-48h]
  int v24; // [rsp+18h] [rbp-40h]
  __int64 v25; // [rsp+20h] [rbp-38h]
  unsigned __int64 v26; // [rsp+28h] [rbp-30h]
  __int64 v27; // [rsp+30h] [rbp-28h]
  __int64 v28; // [rsp+38h] [rbp-20h]
  __int64 v29; // [rsp+40h] [rbp-18h]

  v26 = __readfsqword(0x28u);
  flags = get_flags_ex(a2, 4);
  v15 = 0;
  if ( (~BYTE1(flags) & 6) == 0 )
  {
    v24 = *(_DWORD *)(a1 + 24);
    if ( (*(_BYTE *)(a7 + 4) & 1) != 0 )
    {
      v16 = *(_QWORD *)(a7 + 8);
    }
    else
    {
      v18 = *(_QWORD *)(a7 + 16);
      v16 = 0;
      if ( v18 != -1 )
        v16 = 16 * sel2para(v18, 4, 0);
    }
    v22 = v16;
    v21 = *(_QWORD *)(a7 + 24) + v16;
    v23 = *(_QWORD *)(a7 + 32);
    if ( a6 )
    {
      module_data = (unsigned __int16 *)get_module_data(
                                          (unsigned int)dword_75804,
                                          4,
                                          v15,
                                          v12,
                                          v13,
                                          v14,
                                          a3,
                                          v21,
                                          v22,
                                          v23,
                                          v24,
                                          v25,
                                          v26,
                                          v27,
                                          v28,
                                          v29);
      switch ( *(_BYTE *)(a1 + 22) )
      {
        case 0:
          v20 = module_data[288];
          break;
        case 1:
          v20 = module_data[292];
          break;
        case 2:
          v20 = module_data[296];
          break;
        case 0x10:
          v20 = module_data[289];
          break;
        case 0x11:
          v20 = module_data[293];
          break;
        case 0x12:
          v20 = module_data[297];
          break;
        default:
          v20 = 0;
          break;
      }
      handle_fixups_in_macro(&v21, a2, v20, 2);
    }
    op_offset_ex(a2, a5, &v21);
    LODWORD(v15) = 1;
  }
  return (unsigned int)v15;
}

