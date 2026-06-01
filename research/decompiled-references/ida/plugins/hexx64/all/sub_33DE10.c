__int64 sub_33DE10()
{
  __int64 module_data; // rbx
  unsigned int config2; // ebp
  int v2; // esi
  int v3; // edx
  unsigned int v4; // eax
  int v5; // edx
  __int64 v6; // rdx
  unsigned int v7; // esi

  module_data = get_module_data();
  config2 = read_config2();
  if ( !(_BYTE)config2 )
    return config2;
  v2 = *(_DWORD *)(module_data + 724);
  v3 = *(_DWORD *)(module_data + 604);
  v4 = v3 & 0xFFEFFFFF;
  v5 = v3 | 0x100000;
  if ( (*(_BYTE *)(module_data + 1417) & 1) != 0 )
    v4 = v5;
  *(_DWORD *)(module_data + 604) = v4;
  if ( v2 > 64 )
  {
    if ( ((v2 - 96) & 0xFFFFFFDF) == 0 )
      goto LABEL_7;
    goto LABEL_11;
  }
  if ( v2 > 3 )
  {
    v6 = 0x1000100000001011LL;
    if ( _bittest64(&v6, (unsigned int)(v2 - 4)) )
      goto LABEL_7;
    goto LABEL_11;
  }
  if ( (unsigned int)(v2 - 1) > 1 )
  {
LABEL_11:
    sub_2B4E70((__int64)"PSEUDOCODE_DOCKPOS = 0x%X\nValue is wrong, fallback to DP_RIGHT", v2);
    *(_DWORD *)(module_data + 724) = 4;
  }
LABEL_7:
  v7 = *(_DWORD *)(module_data + 656);
  if ( v7 > 0x100 )
  {
    sub_2B4E70((__int64)"MAX_FUNC_ARGS (%d) exceeds limit, decreased to %u", v7, 256);
    *(_DWORD *)(module_data + 656) = 256;
  }
  return config2;
}

