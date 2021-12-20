(function ($) {
  'use strict';

  Drupal.behaviors.artesisEbsco = {
    attach: function (context) {
      var providerRadios = $('.form-item-search-provider', context);
      providerRadios.each(function (index, item) {
        $(item).on('click', function () {
          var basicSearchVariants = $(item).find('input');
          var radioSelection = basicSearchVariants[0].value;

          $('#search-block-form', context).removeAttr('target');

          if (radioSelection === 'ebsco') {
            $('#search-block-form', context).attr('target', '_blank');

            $('#search-block-form', context).submit(function () {
              $('.ting-search-spinner-placeholder-overlay', context).hide();
              $('.close-ting-search-spinner', context).hide();
              $('div.ting-overlay-spinner-container', context).replaceWith('<div class="ting-overlay-spinner-container"></div>');
            });
          }
        });
      });
    }
  };
})(jQuery);
