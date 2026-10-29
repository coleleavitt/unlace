char *ida_mcp::tools::memory::`anonymous namespace'::classify_macho_section()
{
  bool v0; // zf
  char *result; // rax

  v0 = std::string::find() == -1;
  result = "objc_class_list";
  if ( v0 )
  {
    v0 = std::string::find() == -1;
    result = "objc_category_list";
    if ( v0 )
    {
      v0 = std::string::find() == -1;
      result = "objc_protocol_list";
      if ( v0 )
      {
        v0 = std::string::find() == -1;
        result = "objc_selector_refs";
        if ( v0 )
        {
          v0 = std::string::find() == -1;
          result = "objc_message_refs";
          if ( v0 )
          {
            v0 = std::string::find() == -1;
            result = "objc_class_refs";
            if ( v0 )
            {
              v0 = std::string::find() == -1;
              result = "objc_super_refs";
              if ( v0 )
              {
                v0 = std::string::find() == -1;
                result = "objc_ivars";
                if ( v0 )
                {
                  v0 = std::string::find() == -1;
                  result = "objc_data";
                  if ( v0 )
                  {
                    v0 = std::string::find() == -1;
                    result = "objc_const_authenticated";
                    if ( v0 )
                    {
                      v0 = std::string::find() == -1;
                      result = "objc_method_names";
                      if ( v0 )
                      {
                        v0 = std::string::find() == -1;
                        result = "objc_class_names";
                        if ( v0 )
                        {
                          v0 = std::string::find() == -1;
                          result = "objc_method_types";
                          if ( v0 )
                          {
                            v0 = std::string::find() == -1;
                            result = "swift_type_refs";
                            if ( v0 )
                            {
                              v0 = std::string::find() == -1;
                              result = "swift_reflection_strings";
                              if ( v0 )
                              {
                                v0 = std::string::find() == -1;
                                result = "swift_field_metadata";
                                if ( v0 )
                                {
                                  v0 = std::string::find() == -1;
                                  result = "swift_associated_types";
                                  if ( v0 )
                                  {
                                    v0 = std::string::find() == -1;
                                    result = "swift_protocols";
                                    if ( v0 )
                                    {
                                      v0 = std::string::find() == -1;
                                      result = "swift_type_metadata";
                                      if ( v0 )
                                      {
                                        v0 = std::string::find() == -1;
                                        result = "swift_capture_descriptors";
                                        if ( v0 )
                                        {
                                          v0 = std::string::find() == -1;
                                          result = "code";
                                          if ( v0 )
                                          {
                                            v0 = std::string::find() == -1;
                                            result = "text_segment";
                                            if ( v0 )
                                            {
                                              v0 = std::string::find() == -1;
                                              result = "import_stubs";
                                              if ( v0 )
                                              {
                                                v0 = std::string::find() == -1;
                                                result = "stub_helper";
                                                if ( v0 )
                                                {
                                                  v0 = std::string::find() == -1;
                                                  result = "c_strings";
                                                  if ( v0 )
                                                  {
                                                    v0 = std::string::find() == -1;
                                                    result = "constants";
                                                    if ( v0 )
                                                    {
                                                      v0 = std::string::find() == -1;
                                                      result = "data_const_authenticated";
                                                      if ( v0 )
                                                      {
                                                        v0 = std::string::find() == -1;
                                                        result = "data_segment";
                                                        if ( v0 )
                                                        {
                                                          v0 = std::string::find() == -1;
                                                          result = "data";
                                                          if ( v0 )
                                                          {
                                                            v0 = std::string::find() == -1;
                                                            result = "bss_uninitialized";
                                                            if ( v0 )
                                                            {
                                                              v0 = std::string::find() == -1;
                                                              result = "global_offset_table";
                                                              if ( v0 )
                                                              {
                                                                v0 = std::string::find() == -1;
                                                                result = "lazy_symbol_pointers";
                                                                if ( v0 )
                                                                {
                                                                  v0 = std::string::find() == -1;
                                                                  result = "non_lazy_symbol_pointers";
                                                                  if ( v0 )
                                                                  {
                                                                    v0 = std::string::find() == -1;
                                                                    result = "module_init_functions";
                                                                    if ( v0 )
                                                                    {
                                                                      v0 = std::string::find() == -1;
                                                                      result = "module_term_functions";
                                                                      if ( v0 )
                                                                      {
                                                                        v0 = std::string::find() == -1;
                                                                        result = "linkedit_metadata";
                                                                        if ( v0 )
                                                                        {
                                                                          v0 = std::string::find() == -1;
                                                                          result = "authenticated_pointers";
                                                                          if ( v0 )
                                                                          {
                                                                            v0 = std::string::find() == -1;
                                                                            result = "authenticated_got";
                                                                            if ( v0 )
                                                                              return nullptr;
                                                                          }
                                                                        }
                                                                      }
                                                                    }
                                                                  }
                                                                }
                                                              }
                                                            }
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}

