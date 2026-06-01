__int64 __fastcall sub_11B60(__int64 a1, const char *a2, int a3, const char *a4, char a5, double a6)
{
  __int64 result; // rax
  __int16 v11; // ax
  int v12; // edx
  __int64 v13; // rdi
  size_t v14; // rax
  __int64 v15; // r8
  __int64 v16; // r9
  size_t v17; // rbx
  _QWORD *v18; // rax
  void *v19; // rdx
  size_t v20; // rax
  __int64 v21; // r8
  __int64 v22; // r9
  size_t v23; // rbx
  size_t v24; // r12
  size_t v25; // r12
  _QWORD v26[7]; // [rsp+0h] [rbp-38h] BYREF

  v26[1] = __readfsqword(0x28u);
  if ( a2 )
  {
    if ( !strcmp(a2, "TRICORE_REGISTER_TRACKING") )
    {
      result = 2;
      if ( a3 != 3 )
        return result;
      v11 = *(_WORD *)(a1 + 344);
      if ( *(_DWORD *)a4 )
        *(_WORD *)(a1 + 344) = v11 | 1;
      else
        *(_WORD *)(a1 + 344) = v11 & 0xFFFE;
    }
    else if ( !strcmp(a2, "TRICORE_DEVICE") )
    {
      result = 2;
      if ( a3 != 1 )
        return result;
      if ( (unsigned int)get_segm_qty() )
      {
        if ( a4 )
        {
          v14 = strlen(a4);
          v17 = v14;
          if ( v14 )
          {
            v24 = v14 + 1;
            if ( *(_QWORD *)(a1 + 152) < v14 + 1 )
              *(_QWORD *)(a1 + 136) = qvector_reserve(a1 + 136, *(_QWORD *)(a1 + 136), v14 + 1, 1, v15, v16);
            *(_QWORD *)(a1 + 144) = v24;
            memmove(*(void **)(a1 + 136), a4, v17);
            *(_BYTE *)(*(_QWORD *)(a1 + 136) + v17) = 0;
            v18 = *(_QWORD **)(a1 + 216);
            if ( *(_QWORD *)(a1 + 144) )
              v19 = *(void **)(a1 + 136);
            else
              v19 = &unk_1D228;
          }
          else
          {
            v18 = *(_QWORD **)(a1 + 216);
            v19 = &unk_1D228;
            *(_QWORD *)(a1 + 144) = 0;
          }
          netnode_supset(*v18, -1, v19, 0, 83);
          sub_10A50(a1 + 128, -2147483641, a6);
        }
      }
      else
      {
        if ( a4 && (v20 = strlen(a4), (v23 = v20) != 0) )
        {
          v25 = v20 + 1;
          if ( *(_QWORD *)(a1 + 152) < v20 + 1 )
            *(_QWORD *)(a1 + 136) = qvector_reserve(a1 + 136, *(_QWORD *)(a1 + 136), v20 + 1, 1, v21, v22);
          *(_QWORD *)(a1 + 144) = v25;
          memmove(*(void **)(a1 + 136), a4, v23);
          *(_BYTE *)(*(_QWORD *)(a1 + 136) + v23) = 0;
        }
        else
        {
          *(_QWORD *)(a1 + 144) = 0;
        }
        *(_BYTE *)(a1 + 360) = 1;
      }
    }
    else
    {
      v12 = strcmp(a2, "TRICORE_IORESP");
      result = 1;
      if ( v12 )
        return result;
      result = 2;
      if ( a3 != 2 )
        return result;
      *(_DWORD *)(a1 + 208) = *(_QWORD *)a4;
    }
  }
  else
  {
    sub_11690(
      (__int64)"HELP\n"
               "In this dialog box the user can select the device.\n"
               "\n"
               "The devices represent different microprocessors of the Tricore family.\n"
               "They differ only in their I/O port names.\n"
               "The information about them is\n"
               "stored in the configuration file tricore.cfg. The user\n"
               "can modify these files with a simple text editor as he wishes.\n"
               "\n"
               "ENDHELP\n"
               "Tricore options\n"
               "%*\n"
               " <Enable register ~t~racker:C>>\n"
               "\n"
               "  <~S~elect device:B:0:0::>\n"
               "  Current device: %q\n"
               "\n",
      a1,
      a1 + 344,
      sub_11B10,
      a1 + 136);
  }
  if ( a5 )
  {
    v13 = *(_QWORD *)(a1 + 120);
    v26[0] = *(unsigned __int16 *)(a1 + 344);
    netnode_supset(v13, -1, v26, 8, 65);
  }
  return 0;
}
