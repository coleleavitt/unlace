__int64 __fastcall sub_6F060(__int64 a1)
{
  unsigned int v1; // r12d
  __int64 named_type_tid; // rax
  __int64 v4; // rax

  if ( *(_QWORD *)(a1 + 5344) == -1
    && (named_type_tid = get_named_type_tid(), *(_QWORD *)(a1 + 5344) = named_type_tid, named_type_tid == -1)
    && (h2ti(), h2ti(), v4 = get_named_type_tid(), *(_QWORD *)(a1 + 5344) = v4, v4 == -1) )
  {
    return 0;
  }
  else
  {
    lock_func_range();
    delete_frame_members();
    get_idati();
    create_tinfo();
    v1 = add_frame_member();
    clear_tinfo_t();
    lock_func_range();
  }
  return v1;
}

