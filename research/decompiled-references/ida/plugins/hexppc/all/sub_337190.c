__int64 __fastcall sub_337190(__int64 a1, unsigned __int8 a2)
{
  const char *v2; // rbp
  size_t v3; // r12
  __int64 plugin_options; // rbp
  void *v6; // [rsp+0h] [rbp-48h]

  if ( a1 )
  {
    v2 = *(const char **)(a1 + 24);
    v6 = nullptr;
    if ( v2 )
    {
      v3 = strlen(v2);
      v6 = (void *)qvector_reserve();
      memmove(v6, v2, v3);
      *((_BYTE *)v6 + v3) = 0;
    }
    qstrlwr();
    plugin_options = get_plugin_options();
    if ( v6 )
      qfree();
    if ( (a2 & (plugin_options == 0)) == 0 )
      return plugin_options;
  }
  else
  {
    plugin_options = 0;
    if ( !a2 )
      return plugin_options;
  }
  return get_plugin_options();
}

