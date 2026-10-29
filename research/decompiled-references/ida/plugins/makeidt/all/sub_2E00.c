__int64 sub_2E00()
{
  __int64 v0; // rbx
  const char *plugin_options; // rdi

  if ( (unsigned int)getinf() != 11 || (unsigned __int64)get_entry_qty() <= 1 )
    return 0;
  v0 = qalloc_or_throw();
  *(_QWORD *)(v0 + 8) = get_ph();
  *(_QWORD *)(v0 + 16) = get_ash();
  *(_QWORD *)(v0 + 24) = get_eah();
  *(_QWORD *)v0 = off_7CF0;
  *(_QWORD *)(v0 + 104) = off_7D20;
  *(_QWORD *)(v0 + 96) = 0;
  *(_QWORD *)(v0 + 112) = 0;
  *(_DWORD *)(v0 + 128) = 0;
  *(_QWORD *)(v0 + 136) = 0;
  *(_QWORD *)(v0 + 144) = v0 + 128;
  *(_QWORD *)(v0 + 152) = v0 + 128;
  *(_QWORD *)(v0 + 160) = 0;
  *(_OWORD *)(v0 + 32) = 0;
  *(_OWORD *)(v0 + 48) = 0;
  *(_OWORD *)(v0 + 64) = 0;
  *(_OWORD *)(v0 + 80) = 0;
  plugin_options = (const char *)get_plugin_options();
  if ( plugin_options && !strcmp(plugin_options, "auto") )
    hook_event_listener();
  return v0;
}

