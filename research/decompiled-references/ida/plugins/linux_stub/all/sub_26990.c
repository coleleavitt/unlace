__int64 __fastcall sub_26990(__int64 a1, void *a2, size_t a3)
{
  int v4; // r13d
  ssize_t v5; // rax
  __int64 v6; // rbx

  v4 = *(_DWORD *)(a1 + 56);
  while ( 1 )
  {
    v5 = recv(v4, a2, a3, 0);
    v6 = v5;
    if ( v5 != -1 )
      break;
    if ( *__errno_location() != 4 )
      goto LABEL_8;
  }
  if ( !v5 && a3 )
  {
    *(_DWORD *)(a1 + 96) = 0;
    v6 = -1;
    *(_QWORD *)(a1 + 88) = "connection_closed_by_peer";
    return v6;
  }
  if ( v5 >= 0 )
    return v6;
LABEL_8:
  *(_QWORD *)(a1 + 88) = "recv";
  *(_DWORD *)(a1 + 96) = *__errno_location();
  return v6;
}

